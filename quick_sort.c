#include <stdio.h>
#include <conio.h>

int main(){			///SOME WEIRD ERROR

	int arr[5] = {7,3,8,11,4};
	quicksort(arr,0,5);
	for(int i = 0; i < 5; i++)
		printf("%d ",*(arr + i));

	return 0;
}

int partition(int * arr, int start, int end){		/// non-randomized pivot method

	for(int i = start; i < end; i++)
			printf("%d ",*(arr + i));
	printf("\n");

	int piv = *(arr + start);
	int i = start + 1;
	for(int j = start + 1; j < end; j++){

		if(*(arr + j) < piv){
			swap((arr + j), (arr + i));
			i++;
		}
	}

	swap((arr + i-1),(arr + start));

	return i-1;
}

void swap(int * a, int * b){

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void quicksort(int * arr, int start, int end){

	if(start < end){

		int piv_pos = partition(arr,start,end);
		quicksort(arr,start,piv_pos-1);
		quicksort(arr,piv_pos + 1,end);

	}
}