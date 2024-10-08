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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <string.h>
#include <memory/vaddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");//从命令行读取用户的输入。

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;//返回指向输入行的指针。这允许调用者访问用户输入的内容。
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int steps = 1;
	if(arg == NULL){
		cpu_exec(1);
		return 0;
	}
	sscanf(arg,"%d",&steps);
	if(steps < - 1){
		printf("Error , N must > -1");
		return 0;
	}
	cpu_exec(steps);
	return 0;
}	

static int cmd_info(char *args){
	char *arg = strtok(NULL," ");
	if(strcmp(arg,"r")==0){
		isa_reg_display();
	}else if(strcmp(arg,"w")== 0){
		display_watchpoint();
	}else{
		printf("info r or w , invalid input \n ");
	}
	return 0 ;
}


static int cmd_x(char *args){	
	char *N = strtok(NULL," ");
	char *vaddr= strtok(NULL," ");
	if(N==NULL || vaddr == NULL){
		printf("Must be: x N EXPR \r\n");
		return 0;
	}
	int num;
	vaddr_t addr;
	sscanf(N,"%d",&num);
	sscanf(vaddr,"%x",&addr);
	for(int i=0;i<num;i++){
		printf("0x%08x\r\n",vaddr_read(addr+i*4,4));
	}
	return 0;
}

static int cmd_p(char *args){
	int expr_res_val = 0;
	char *e = strtok(NULL," ");
	bool ifsucess = true;
	expr_res_val = expr(e,&ifsucess);
	printf("result exec is %d \n",ifsucess);
	printf("result exec is %d \n",expr_res_val);
	return 0;
}

static int cmd_w(char *args){
	char *e = strtok(NULL," ");
	new_wp(e);
	return 0;
}

static int cmd_d(char *args){
	char *N = strtok(NULL," ");
	int num = 0;
	sscanf(N,"%d",&num);
	free_wp(num);
	return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "single exec", cmd_si },
  { "info", "info r/w show regs/watch", cmd_info },
  { "x", "scan memory", cmd_x },
  { "p", "expr ", cmd_p},
	{ "w", "add watch point", cmd_w},
	{ "d", "delete watch point", cmd_d},


  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {//直到rl_gets()返回NULL（用户没有输入）
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");//使用strtok函数以空格为分隔，将用户输入分割成一个个的标记（tokens）。第一个标记被认为是命令cmd。
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

	int expr_res_val = 0;
	//char * test_exec = "65+(12*3)+99-32*5";
	char * test_exec = "*0x80000000";
	bool ifsucess = true;
	expr_res_val = expr(test_exec,&ifsucess);
	printf("result exec is %d \n",ifsucess);
	printf("result exec is %d \n",expr_res_val);
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
