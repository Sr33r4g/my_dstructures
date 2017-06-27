#include <stdio.h>
#include <stdlib.h>



/*
									maximum(arr)
									extract_maximum(arr)
									increase_value(arr,i,val)
									insert_value(arr,val)

*/

int main(){




	retur 0;
}

int maximum(int * arr){
	return *(arr + 1);
}

int extract_maximum(int * arr, int size){
	
	if(size == 1)										//// 
	{
		printf("Cant return max. No value to return\n");
		return -1;
	}


	int maximum = *(arr + 1);

	swap(arr,1,size--);

	max_heapify(arr,size);

	return max;

} 

void increase_value(int * arr, int value, int i){

	if(value < *(arr + i)){
		printf("Cant add value as it is less than the current value\n");
		return;
	}

	*(arr + i) = value;

	while(i > 1 && (*(arr + (i/2)) > *(arr + i) )){

		swap(arr,i,(i/2));
		i /= 2;
	}



}

void insert_value(int * arr, int value, int size){

	size++;
	*(arr + size) = value;

	increase_value(arr,value,size);

}