#include <stdio.h>					/// INCOMPLETE
#include <stdlib.h>
#include <stdbool.h>

	/// this program finds the total no. of connected components using recursion.

void disp(bool *, int);

int main(){

		int n = 0,m = 0;			///total no. of vertices and edges
		scanf("%d %d",&n,&m);

		bool arr[n][n]; memset(arr,0,sizeof(arr[0][0]) * n * n);
		bool visited[n]; memset(visited,0,n);
		for(int i = 0; i < m; i++){
			int x = 0, y = 0;
			scanf("%d %d",&x,&y);
			*(*(arr + x) + y) = 1;
			*(*(arr + y) + x) = 1;
		}

		/*for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ",*(*(arr + i) + j));
			}
			printf("\n");
		}*/


		disp(arr,n);


int total_connected_components = 0;

		for(int i = 0; i < n; i++){
			if(!visited[i]){
				total_connected_components++;
				// dfs(arr,visited,n,i);
			}
		}

		printf("total_connected_components : %d",total_connected_components);


	return 0;
}

void disp(bool * arr, int n){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d ",*(arr+i+j));
		printf("\n");
	}

			*(visited + current_node) = 1;
			
			for(int i = 0; i < n; i++){
			
			if((*(arr + ((current_node * n) + i)) == 1) && (*(visited + i) == 0) )
				dfs(arr,visited,n,i);
					

		}
}