#include <stdio.h>
#include <stdlib.h>

/*
	*************************
	Binary Search Tree
	*************************
*/

typedef struct s{
	int data;
	struct s *left, *right;
}node;

node * insert(node *, int);

int main(){

		node * root = NULL;

		// int a[] = {25,15,40,10,22,35,70,4,12,18,24,31,44,66,90};
		int a[] = {50,30,20,40,70,60,80};

		// printf("%d",);
		root = insert(root,*(a + 0));
		for(int i = 1; i < (sizeof(a)/4); i++){
			// root = insert(root, *(a + i));
			insert(root, *(a + i));
		}

		printf("Preorder : ");
		preorder(root);
		printf("\n");

		printf("Inorder : ");
		inorder(root);
		printf("\n");

		printf("Postorder : ");
		postorder(root);
		printf("\n");
		
		return 0;
}

node * insert(node *root, int key){
	if(root == NULL){		///create a new node
		// printf("creating a new node\n");
		node * temp = (node *) malloc(sizeof(node));
		temp->data = key;
		temp->left = temp->right = NULL;
		root = temp;

	}	
	else{

		if(root->data > key){		//key < root->data

			root->left = insert(root->left,key);

		}
		else{			///key >= root->data 
			root->right = insert(root->right,key);
		}
	}

	return root;
}

void preorder(node * root){

	if(root != NULL){		/// preorder
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}

}

void postorder(node * root){
	if(root != NULL){		/// preorder
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

void inorder(node * root){
if(root != NULL){		/// preorder
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}