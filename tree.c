#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  char inf[1];
	struct node* left;
	struct node* right;
}NODE;

NODE * head = NULL;

void show_tree(NODE * current){
	NODE * tmp = current;
	printf("%c -> ", (*tmp).inf[0]);
	if((*tmp).right != NULL){
		show_tree((*tmp).right);
	}
	if((*tmp).left != NULL){
		show_tree((*tmp).left);
	}
} 


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
	//printf("hello world");	
	add_node('A', head);
	add_node('B', head);
	show_tree(head);
	return 0;
}
