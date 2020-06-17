#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  char inf[1];
	struct node* left;
	struct node* right;
}NODE;


NODE * head = NULL;

void show_tree(){
	NODE * tmp = head;
	while(tmp != NULL){
		printf("%c ->", (*tmp).inf[0]);
		tmp = (*tmp).left;
	} 
}

NODE * create_node(char value){
	NODE * leaf = (NODE *) malloc(sizeof (NODE));
	(*leaf).inf[0] = value;
	return leaf;
}


void add_node(char value, NODE * left, NODE * right){
	NODE * leaf = create_node(value);
	NODE * tmp = head;

	if(head == NULL){
		head = leaf; 
		return;
	}

	if(value > (*tmp).inf[0]){
		printf("B");
	}

	while((*tmp).left != NULL){
		tmp = (*tmp).left;
	}
	(*tmp).left = leaf;
}


int main(){
	//printf("hello world");	
	add_node('A', NULL, NULL);
	add_node('B', NULL, NULL);
	show_tree();
	return 0;
}
