#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int binarysort(int *arr, int low, int high, int key);

int main()
{
   int n;
   scanf("%d",&n);
   int arr[n]; memset(arr,0,n);
   
   for(int i = 0; i < n; i++)
    scanf("%d",(arr + i));
    

   int low = 0, high = (n-1);
    qsort(arr,n,sizeof(arr[0]),compare);		//sorting the array
    
    int q = 0;
    scanf("%d",&q);

    for(int i = 0; i < q; i++){
    	int key;
    	scanf("%d",&key);
    	printf("Output : %d\n",binarysort(arr,low,high,key));
    }
    
    
    
}

int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int binarysort(int *arr, int low, int high, int key){

	while(low <= high){

		int mid = (low + high)/2;

		if(*(arr + mid) == key)
			return (mid + 1);
		else if(*(arr + mid) < key)
			low = mid + 1;
		else
			high = mid - 1;

	}

	return -1;
}