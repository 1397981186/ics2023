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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
	uint32_t val;// watchpoint value
	char str[32];// watchpoint express

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char *args){
	if(free_ == NULL){
		printf("ERROR, free is NULL \n");
		assert(0);
	}
	WP* new_wp = free_;
	free_ = free_->next;//delete it from pool
	new_wp->next = NULL;
	strcpy(new_wp->str,args);
	bool success = false;
	uint32_t val = expr(new_wp->str,&success);
	if(success){
		new_wp->val = val;
		printf("watchpoint %d: %s initial value is Decimal: %u Hexadecimal: 0x%x \n",new_wp->NO,new_wp->str,new_wp->val,new_wp->val);
		if(head == NULL){
			head = new_wp;
		}else{
			new_wp->next = head;//add at head
			head = new_wp;
		}
	}else{
		printf("watchpoint expression invalid \n");
	}
}

void free_wp(int n){
	if(head == NULL){
		printf("current no watchpoint can be delete \n");
		return;
	}
	WP * free_wp = NULL;
	//move from head
	if(head->NO == n){
		free_wp = head;
		head = head->next;
		free_wp->next = NULL;
	}else {
		WP * itr = head;
		while(itr->next != NULL){
			if(itr->next->NO == n){
				free_wp = itr->next;
				itr->next = itr->next->next;
				free_wp->next = NULL;
				break;
			}
			itr = itr->next;
		}
		printf("No match the %d watchpoint \n",n);
		return ;	
	}
	//add to free
	free_wp->next = free_;
	free_ = free_wp;
}

void display_watchpoint(void){
	WP *wp = head;
	if(wp==NULL){
		printf("current have no watchpoints \n");
	}
	while(wp != NULL){
		printf("%d watchpoint expression: %s now value is: %u 0x%x \n",wp->NO,wp->str,wp->val,wp->val);
		wp = wp->next;
	}
}
