/*

https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/prison-break-5/

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int t;
	scanf("%d",&t);

	while(t--){
		int n = 0;
		int paths = 0;
		scanf("%d",&n);
		bool arr[n][n];
		memset(arr,0,(sizeof(bool)*n*n));
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				scanf("%d",(*(arr + i) + j));

		search_for_paths(arr,0,0,&paths,n);
		printf("%d",paths);

	}

	return 0;
}



void search_for_paths(bool * arr, int x, int y,int * paths, int n){

	if(x >= n || y >= n)		/// jumping the boundary, return
		return;

	if(x == (n-1) && y == (n-1)){
		*paths++;
		return;
	}

	if(!(arr + (x*n) + y)){
		search_for_paths(arr,x+1,y,paths,n);
		search_for_paths(arr,x,y+1,paths,n);
		search_for_paths(arr,x-1,y,paths,n);
		search_for_paths(arr,x,y-1,paths,n);

	}
	
}



