/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>

enum {
  TK_NOTYPE = 256, TK_EQ,

  /* TODO: Add more token types */
	TK_NUM,TK_HEX,TK_NEG,TK_POINTER,

	//NEG,POINTER not in rules
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
	{"[0-9]+",TK_NUM},		// nums
	{"0x[0-9]+",TK_HEX},		// nums
  {"\\-", '-'},         // plus
  {"\\-", '-'},         // plus
  {"\\*", '*'},         // plus
  {"\\/", '/'},         // plus
  {"\\(", '('},         // plus
  {"\\)", ')'},         // plus
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    //调用 regcomp 函数编译 rules[i].regex 字符串表达的正则表达式，编译结果保存在 re[i] 中，如果编译成功，函数返回0，否则返回错误代码，这个返回值被赋给了 ret。
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
					case TK_NUM:
						Assert((substr_len< 32),"%s","token max 32, but rules match more than 32");
						strncpy(tokens[nr_token].str,substr_start,substr_len);
						tokens[nr_token].str[substr_len]= '\0';
						tokens[nr_token].type = rules[i].token_type;
						nr_token++;
						break;
        	case TK_HEX:
						printf("find HEX \n");
						Assert((substr_len< 32),"%s","token max 32, but rules match more than 32");
						strncpy(tokens[nr_token].str,substr_start,substr_len);
						tokens[nr_token].str[substr_len]= '\0';
						tokens[nr_token].type = rules[i].token_type;
						nr_token++;
						break;
          default: 
						tokens[nr_token].type = rules[i].token_type;
						nr_token++;
						break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
	// explit neg , pointer
	for(int i2042 = 0;i2042<=nr_token;i2042++){
		if(tokens[i2042].type == '*' && (i2042==0||(tokens[i2042-1].type!=TK_NUM && tokens[i2042-1].type!=TK_HEX && tokens[i2042-1].type!=')')))	{
			printf("token match pointer \n");
			tokens[i2042].type= TK_POINTER;
		}
	}

  return true;
}

typedef struct EVAL_RES{
	int res;
	bool ifsuccess;
}Eval_Res;

static int op_pir(int op){
	// *,/
	// +,- 
	if(op ==TK_POINTER){
		return 2;
	}else if(op == '*' || op == '/')	{
		return 1;
	}else if(op == '+' || op == '-'){
		return 0;
	}else
		return 999;
}

static int find_op(int p, int q){
	int pri = 1000;
	int cnt = 0;
	int place = p;
	for(int i = p;i<=q;i++){
		if(tokens[i].type == '('){
			cnt++;
			i++;
			while(1){//bu yao kuo hao nei rong
				if(tokens[i].type== '('){
					cnt ++;
				}else if(tokens[i].type==')'){
					cnt --;
				}
				i++;
				if(cnt ==0){
					i--;
					break;
				}
			}
			if(i>q){
				printf("i >q ,break");
				break;
			}
		}else if(tokens[i].type ==TK_NUM||tokens[i].type == TK_HEX ){
			continue;
		}else if(op_pir(tokens[i].type) <= pri){
			pri = op_pir(tokens[i].type);
			place = i;	
		}
	}
	return place;
}

static bool check_parentheses(int p,int q){
	printf("checking parenthese \n");
	int cnt = 0;
	if(tokens[p].type == '('&& tokens[q].type== ')'){
		for(int i =p;i<=q;i++){
			if(tokens[i].type== '('){
				cnt ++;
			}else if(tokens[i].type==')'){
				cnt --;
			}

			if(cnt ==0){
				return i==q;
			}
		}
	}
	return false;
}

Eval_Res eval(int p,int q){
	printf("start eval \n");
	Eval_Res result;
	result.ifsuccess = false;
	result.res = 0;
	Eval_Res val1;
	Eval_Res val2;
	int op = 0;
	if(p>q){
		result.ifsuccess = false;
		result.res = 0;
		printf("p bigger than q, expr.c:eval \r\n");
		return result;	
	}else if(p == q){
		printf("p == q \n");
		if(tokens[p].type == TK_NUM){
			result.ifsuccess = true;
			result.res = strtol(tokens[p].str,NULL,10);
		}else if(tokens[p].type == TK_HEX){
			result.ifsuccess = true;
			result.res = strtol(tokens[p].str,NULL,16);
		}
		return result;
	}else if(check_parentheses(p,q)){
		printf("is in parenthese \n");
		return eval(p+1,q-1);
	}else {
		printf("excute op  \n");
		op = find_op(p,q) ;
		printf("p,q is %d %d, op place is %d \n",p,q,op);
		
		if(tokens[op].type == TK_POINTER){
			printf("reading pointer \n");
			Eval_Res res_pointer_addr = eval(op+1,q);
			result.res = vaddr_read(res_pointer_addr.res,4);
			result.ifsuccess = res_pointer_addr.ifsuccess;
			return result;
		}
		val1 = eval(p,op-1);
		val2 = eval(op+1,q);
		if(val1.ifsuccess && val2.ifsuccess){
			result.ifsuccess = true;
		}else{
			return result;
		}

		switch(tokens[op].type)	{
			case '+': result.res = val1.res + val2.res;break;
			case '-': result.res = val1.res - val2.res;break;
			case '*': result.res = val1.res * val2.res;break;
			case '/': result.res = val1.res / val2.res;break;
			default: printf("invalid operator\n");break;
		}
	}
	return result;	


}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
	printf("nr_token is %d \n",nr_token);
  /* TODO: Insert codes to evaluate the expression. */
	Eval_Res eval_res;
	eval_res= eval(0,nr_token-1);
	*success = eval_res.ifsuccess;


  return eval_res.res;
}
