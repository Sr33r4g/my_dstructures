
//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/we-are-on-fire/

#include <stdio.h>			
#include <stdbool.h>			
#include <stdlib.h>			

#include "myheaders/matrix_csv.h"

void display(int *, int, int);
void dfs(int *, int, int, int, int, int *);


int main(){				

	int total_nations = 0;
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);

	int arr[n][m]; memset(arr,0,(sizeof(arr[0][0]) * n * m));
	int z = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&z);
			*(*(arr + i) + j) = (z == 0) ? 0 : 1;
			// arr[i][j] = z;

			total_nations += (z != 0) ? 1 : 0;
		}
	}

	

	printf("total_nations : %d\n",total_nations);
	printf("\n");
	// display(arr,n,m);
	// generate_csv("l1",arr,n,m);

	for(int i = 0; i < q; i++){

		int x,y;
		scanf("%d %d",&x,&y);
		dfs(arr,n,m,x-1,y-1,&total_nations);
		printf("%d\n",total_nations);

	}



	return 0;
}

void display(int * arr, int n, int m){


	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			printf("%d ",*(arr + (i*m) + j));
		printf("\n");
	}

	// printf("Value :%d\n", *(arr + i*n + j) );

}	

void dfs(int * arr, int n, int m, int x, int y, int * total_nations){
		/// 1 - nation, 0 - ocean, 2- burnt
		// printf("val : %d, x: %d, y: %d, n: %d, m: %d, total_nations : %d\n",*(arr + (x*m) + y),x,y,n,m,*total_nations);
		if(x >= n || y >= m){
			// printf("Getting here\n");
			return;
		}

		if(x < 0 || y < 0)
			return;


		if(*(arr + (x*m) + y) == 0)			///if its an ocean, return
			return;
		
						
			// return;
		if(*(arr + (x*m) + y) == 1){		//if its a nation, Hans!
			*(arr + (x*m) + y) = 2;
			// printf("Decrementing total_nations\n");
			(*total_nations)--;
			dfs( arr , n , m , x , y-1 , total_nations);		//up
			dfs( arr , n , m , x+1 , y , total_nations);		//right
			dfs( arr , n , m , x , y+1 , total_nations);		//down
			dfs( arr , n , m , x-1 , y , total_nations);			//left
		}
		
		 


}