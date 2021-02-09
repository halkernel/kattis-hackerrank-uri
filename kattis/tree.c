#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ln printf("\n");

typedef struct node{
  char inf[1];
	struct node* left;
	struct node* right;
}NODE;

NODE * head = NULL;

void pre_print(NODE * current);
void in_print(NODE * current);
void post_print(NODE * current);


NODE * create_node(char value){
	NODE * leaf = (NODE *) malloc(sizeof (NODE));
	(*leaf).inf[0] = value;
	return leaf;
}


void add_node(char value, NODE * current){
	NODE * tmp = current;

	if(current == NULL){
		head = create_node(value); 
		return;
	}

	if(value > (*tmp).inf[0]){
		if((*tmp).right == NULL){
			(*tmp).right = create_node(value);
			return;
		}
		add_node(value, (*tmp).right);
	}else {
		if((*tmp).left == NULL){
			(*tmp).left = create_node(value);
			return;
		}
		add_node(value, (*tmp).left);
	}
}	



int main(){
	char let[26];
	int i;
	scanf("%s", let);
	for(i=0; i < strlen(let); i++){
		add_node(let[i], head);
	}
    pre_print(head);
	ln
	in_print(head);
	ln
	post_print(head);
	ln

	return 0;
}




void pre_print(NODE * current){
	NODE * tmp = current;
	printf("%c", (*tmp).inf[0]);
	if((*tmp).left != NULL){
		pre_print((*tmp).left);
	}
	if((*tmp).right != NULL){
		pre_print((*tmp).right);
	}
} 


void in_print(NODE * current){
	NODE * tmp = current;
	if((*tmp).left != NULL){
		in_print((*tmp).left);
	}
	printf("%c", (*tmp).inf[0]);
	if((*tmp).right != NULL){
		in_print((*tmp).right);
	}
} 

void post_print(NODE * current){
	NODE * tmp = current;
	if((*tmp).left != NULL){
		post_print((*tmp).left);
	}
	if((*tmp).right != NULL){
		post_print((*tmp).right);
	}
	printf("%c", (*tmp).inf[0]);
} 