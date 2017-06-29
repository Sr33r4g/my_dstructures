#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "myheaders/matrix_csv.h"

#define index 4

int cmpr(const void *, const void *);

			// static int a[1000000][1000000];
int main(){

	int n = 30,m = 54;
	// scanf("%d %d",&n,&m);

	int arr[n][m]; memset(arr,0,n*m*sizeof(arr[0][0]));

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			*(*(arr + i) + j) = input[(i*n) + (j)];
		}

	}

	// test();
	disp(arr,n,m);
	return 0;
}


///for qsort()
/*int cmpr(const void * x, const void * y){

	t * t1 = (t *) x;
	t * t2 = (t *) y;

	printf("a : %d b : %d\n",t1->y,t2->y);
	return (t1->y - t2->y);

}*/



void disp(int * a, int x, int y){

	// printf("\n\n %d",*(a + x + y));

	for(int i = 0; i < x * x; i++)
	{
		for(int j = 0; j < y; j++){
			printf("%d ",*(a + i*x + j));
				if(i % x == 0)
					printf("\n");}
	}
	
	
}