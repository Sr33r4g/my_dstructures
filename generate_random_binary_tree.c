#include <stdio.h>
#include <stdlib.h>

typedef struct n{

	struct n * left, * right;
	int key;

}nodes;

// insert(nodes *, int, nodes *, int , int );


int main(){

	nodes * root = NULL;

	printf("sizeof root : %d\n",root->key);

	int input[] = {8,7,6,3,4};

	nodes * queue[(sizeof(input))/4] ;			/// lets consider the maximum size...
	int head = 0, tail = 0;

	for(int i = 0; i < ((sizeof(input))/4); i++){

			insert(root,*(input + i),queue,head,tail);
	}

	disp(root);

	// display(root);

	return 0;
}

void insert(nodes * root, int data, nodes * queue[], int head, int tail){

	printf("sizeof root : %d\n",sizeof(root));

	if(root == NULL){									/// tree is empty
		nodes * temp = (nodes *) (malloc(sizeof(nodes)));
		temp->left = temp->right = NULL;
		temp->key = data;
		root = temp;
		// printf("Root is null so made a new root\n");
		printf("Root key : %d\n",root->key);
		return;
	}

	*(queue + tail++) = root;

	while(head != tail){

		nodes * current_node;
		current_node = (queue + head++);

		if(current_node->left == NULL){
			nodes * n = (nodes *) (malloc(sizeof(nodes)));
			n->left = n->right = NULL;
			n->key = data;
			current_node->left = n;
			printf("In left\n");
			return;
		}
		else{
			*(queue + tail++) = current_node->left;
		}



		if(current_node->right == NULL){
			nodes * n = (nodes *) (malloc(sizeof(nodes)));
			n->left = n->right = NULL;
			n->key = data;
			current_node->right = n;
			printf("In right\n");
			return;
		}
		else{
			*(queue + tail++) = current_node->right;
		}

	}

}


void display(nodes * root){

	nodes * q[20];

	int head = 0;
	int tail = 0;

	*(q + tail++) = root;
	printf(".......BFS Traversal......\n");
	
	while(head != tail){

		nodes * current_node = *(q + head++);

		printf("%d -> ",current_node->key);

		if(current_node->left != NULL)
			*(q + tail++) = current_node->left;


		if(current_node->right != NULL)
			*(q + tail++) = current_node->right;

	}

}

void disp(nodes * node){

	if(node != NULL)
		printf("%d ", node->key);
	else
		printf("Is null");

}