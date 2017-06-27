#include <stdio.h>
#include <stdlib.h>



typedef struct n{

	int data;
	struct n * left, *right;

}node;

void preorder(node *);
void postorder(node *);
void inorder(node *);
node* insert(node *, int);

int main(){

	node *root = NULL;
	int a[] = {2,44};
	if(root == NULL){
		root = (node *) malloc(sizeof(node));
		root->data = 10;
		printf("Done\n");
	}

	for(int i = 0; i < 5; i++){
		int z = 0;
		// scanf("%d",&z);
		insert(root,*(a + i));
	}

		printf("Inorder : ");
		inorder(root);


	return 0;
}




node* insert(node * root,int data){

	if(root->data >= data)
		root->left = insert(root->left,data);
	else if(root->data < data)
		root->right = insert(root->right,data);
	else{
		node * n = (node *) malloc(sizeof(node));
		n->data = data;
		n->left = n->right = NULL;
		root = n;
		return root;
	}


}

void inorder(node * root){

	if(root != NULL){

		inorder(root->left);
		printf("%d -> ",root->data);
		inorder(root->right);

	}
}