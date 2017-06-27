#include <stdio.h>
#include <stdlib.h>

									///WORKS - HEAP SORT
void heap_sort(int *, int);


int main(){

	int arr[] = {0,4,7,8,3,2,6,5,100};

	// max_heap(arr,(sizeof(arr)/4)-1);
	heap_sort(arr,(sizeof(arr)/4)-1);
	printf("Sorted : ");
	for(int i = 1; i < sizeof(arr)/4;i++){
		printf("%d ",*(arr + i));
	}

	return 0;
}

void heap_sort(int * arr,int size){


		for(int i = size; i >= 2; i--){
			max_heap(arr,i);
			swap(arr,1,i);

			printf("Here : ");
			for(int i = 1; i <= size; i++)
				printf("%d ",*(arr + i));
			printf("\n");

		}
}

void max_heap(int * arr, int size){

	for(int i = size/2; i >= 1; i--){
		heapify(arr,i,size);
		
	}

	/*printf("Here : ");
		for(int i = 1; i <= size; i++)
			printf("%d ",*(arr + i));
		printf("\n");*/
}

void heapify(int * arr, int i, int size){

	int largest = i;
	int right = (2 * i) + 1;
	int left = (2 * i);

	if( (left <= size) && (*(arr + left) > *(arr + largest)) ){
		largest = left;
	}


	if( (right <= size) && (*(arr + right) > *(arr + largest)) ){
		largest = right;
	}

	if(largest != i){

		swap(arr,largest,i);
		heapify(arr,largest,size);
	}

}

void swap(int *arr, int i, int j){
	int temp = 0;
	temp = *(arr + j);	
	*(arr + j) = *(arr + i);
	*(arr + i) = temp;	
}