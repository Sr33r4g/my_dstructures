#include <stdio.h>
#include <stdbool.h>

typedef struct n{
	struct n * next;
	int data;
}node;


int main(){
		node * root[10];

		printf("size of struct : %d\n",sizeof(node));

		printf("Before initialization\n");
		for(int i = 0; i < 10; i++){
			// *(root + i) = NULL;
		root[i] = (node * ) malloc(sizeof(node));

		printf("%p\n",*(root + i));
	}
	// (root + 5)->data = 10;
	node * temp = (node *) malloc(sizeof(node));
	temp->data = 6;
	printf("data : %d\n",temp->data);
	printf("After initialization\n");	
	for(int i = 0; i < 10; i++){
		*(root + i) = (node * ) malloc(sizeof(node));
		// printf("root + i : %p\n",(root + i));
		// printf("*(root + i) : %p\n",*(root + i));
	}


	return 0;
}

void display(node * node){

}