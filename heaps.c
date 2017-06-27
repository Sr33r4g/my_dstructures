#include <stdio.h>
#include <stdlib.h>

void min_heap(int *, int );
void max_heap(int *, int );
void swap(int *,int,int);

int main(){				//BOTH WORKING

	// int arr[] = {0,4,3,7,1,8,5};

	int arr[] = {0,10,8,9,7,6,5,4};
	max_heap(arr,((sizeof(arr)/4)-1));

	printf("Max Sorted arr : ");

	for(int i = 1; i < (sizeof(arr)/4); i++){
		printf("%d ",*(arr + i));
		}

	/*min_heap(arr,((sizeof(arr)/4)-1));

	printf("\nMin Sorted arr : ");

	for(int i = 1; i < (sizeof(arr)/4); i++){
		printf("%d ",*(arr + i));
		}*/
		
	return 0;
}


void max_heap(int * arr, int size){
		printf("Size %d\n",size);
		for(int i = size/2; i >= 1; i--){

		max_heapify(arr,i,size);
		}
}


void min_heap(int * arr, int size){
	for(int i = size/2; i >= 1; i--){
		min_heapify(arr,i,size);
	}
}

void max_heapify(int * arr, int i,int size){					///MAX HEAP.....works
	int left_child =  i * 2;
	int right_child =  (i * 2) + 1;
	int largest = i;

	if((left_child <= size) && (*(arr + left_child) > *(arr + i))){
		largest = left_child;
	}

	if((right_child <= size) && (*(arr + right_child) > *(arr + largest))){
		largest = right_child;
	}

	if(largest != i){
		
		swap(arr,i,largest);
		max_heapify(arr,largest,size);
	}

}


void swap(int * arr, int i, int j){
	int temp = 0;
	temp = *(arr + i);
	*(arr + i) = *(arr + j);
	*(arr + j) = temp;
}


void min_heapify(int * arr, int i,int size){					///MAX HEAP.....works
	int left_child =  i * 2;
	int right_child =  (i * 2) + 1;
	int smallest = i;

	if((left_child <= size) && (*(arr + left_child) < *(arr + i))){
		smallest = left_child;
	}

	if((right_child <= size) && (*(arr + right_child) < *(arr + smallest))){
		smallest = right_child;
	}

	if(smallest != i){
		
		swap(arr,i,smallest);
		min_heapify(arr,smallest,size);
	}

}