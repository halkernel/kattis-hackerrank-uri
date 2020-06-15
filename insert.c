#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  char inf[1];
	struct node* left;
	struct node* right;
}NODE;

void show_tree(NODE * tree){
  
}

void add_node(char value){
	NODE * tmp = (NODE *) malloc(sizeof (NODE));
	(*tmp).inf[0] = value;
}

NODE * head = NULL;

int main(){
  printf("hello world");
  return 0;
}
