#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
	*****************************
	This program is used to join 
	2 trees into 1.

	It displays the root(topmost)
	parent of every node.
	*****************************
*/
int root(int *, int);
void display(int *, int *,int);
void weighted_union(int *, int *, int, int);
int cmpr(const void *, const void *);
bool find(int *, int, int);

int main(){
	int n,m;
	scanf("%d %d",&n,&m);

	int arr[n]; memset(arr,0,n);
	int size[n]; memset(size,0,n);

	for(int i = 0; i < n; i++){
		arr[i] = i;					//every node is a root of itself
		size[i] = 1;
	}

	int x,y;
	while(m--){
		scanf("%d %d",&x,&y);
		weighted_union(arr,size,x-1,y-1);

	}
		display(arr,size,n);



	return 0;
}

void weighted_union(int * arr, int* size, int a, int b){

	if(find(arr,a,b)){
		int root_a = root(arr,a);
	int root_b = root(arr,b);

	if(*(size + root_a) > *(size + root_b)){
		*(arr + root_b) = root_a;
		*(size + root_a) += *(size + root_b);
	}
	else{
		*(arr + root_a) = root_b;
		*(size + root_b) += *(size + root_a);
	}
	}
}

void display(int * arr, int * size, int n){

	// for(int i = 0; i < n; i++)
	// 	printf("arr: %d and size: %d\n",*(arr + i),*(size + i));

	for(int i = 0; i < n; i++){

		int root_friend = 0;
		root_friend = *(size + root(arr,i));
		
		printf("%d ",(root_friend - 1));	
	}
	// printf("\n");
}

int root(int * arr, int x){

	while(*(arr + x) != x){
		*(arr + x) = *(arr + *(arr + x));
		x = *(arr + x);
	}
	return x;
}


		/// exclusive for qsort()
int cmpr(const void *a, const void *b){
	return (*(int *)a - *(int *)b);

}

bool find(int * arr,int a, int b){
	if(root(arr,a) == root(arr,b)){
		return false;
	}
	else{
		return true;
	}
}