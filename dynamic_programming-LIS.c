#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
	***********************************
	Longest Increasing Subsequence
	using Dynamic Programming
	***********************************
*/

int main(){

		int n;
		scanf("%d",&n);

        int arr[n]; memset(arr,0,n);
        int temp[n]; memset(temp,0,n);

        for(int i = 0; i < n; i++){			///inputs
        	*(temp + i) = 1;
        	scanf("%d",(arr + i));
        }
        int max_value = 1;

        for(int i = 1; i < n; i++){
        	for(int j = 0; j < i; j++){
        		
        		if(*(arr + i) > *(arr + j)){
        			*(temp + i) = ( (*(temp + j) + 1)  > *(temp + i) ) ? (*(temp + j) + 1) : *(temp + i) ;

        			max_value = (*(temp + i) > max_value) ? *(temp + i) : max_value ;
        		}

        	}
        }

        printf("max : %d",max_value);

return 0;
}
