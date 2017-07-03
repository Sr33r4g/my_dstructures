#include <stdio.h>
#include <stdlib.h>

typedef struct n{

	struct n * left, * right;
	int key;

}nodes;

nodes * insert(nodes *, int, nodes *, int , int *);


int main(){

	nodes * root = NULL;//(nodes *) malloc(sizeof(nodes));

	printf("sizeof root : %d\n",sizeof(root));
	
	int input[] = {8,7,6,3,4};

	nodes * queue[(sizeof(input))/4];// = (nodes *) malloc(sizeof(nodes));			/// lets consider the maximum size...
	int head = 0, tail = 0;

	for(int i = 0; i < ((sizeof(input))/4); i++){
			printf("%d\n",queue[i]);
			insert(root,*(input),&queue,head,&tail);
	}
			// root = insert(root,*(input + i),queue,head,&tail);
	// disp(root);

	return 0;
}

nodes * insert(nodes * root, int data, nodes * queue, int head, int *tail){

	// printf("address root : %d\n",root);//((nodes)*root).key);

	if(root == NULL){
		nodes *temp = (nodes *) malloc(sizeof(nodes));
		temp->left = temp->right = NULL;
		temp->key = data;
		root = temp;
		printf("Root is null so made a new root\n");
		return root;
	}

	// *(queue + *tail) = *root;
	
	
		// return root;

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