#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool didReach(int *, int *, int, int, int, int, int, int);

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	int arr[n][m]; memset(arr,0,(sizeof(arr[0][0]) * n * m));
	int visited[n][m]; memset(visited,0,(sizeof(visited[0][0]) * n * m));

	
	for(int i = 0 ; i < n ; i++)
		for(int j = 0; j < m; j++){
			int x;
			scanf("%d",&x);
			*(*(arr + i) + j) = x;
		}


		printf("%s \n",(didReach(arr,visited,0,0,n-1,m-1,n,m) ? "Yes" : "No"));

		

	return 0;
}

bool didReach(int * arr,int * visited, int x, int y, int dest_x, int dest_y, int n, int m ){

					if(x == dest_x && y == dest_y){
						return true;
					}

					if(x >= m || y >= n){
						return false;
					}

					if(x < 0 || y < 0){
						return false;
					}


					if(!*(arr + (y * (n)) + x))	{		//if its 0, return false
						return false;
					}

					if(*(visited + (y * n) + x)){
							return false;
					}
					else{
						*(visited + (y * n) + x) = 1;
					
					}

					if(didReach(arr , visited,x ,(y - 1) ,dest_x ,dest_y ,n ,m) == true)		//up
						return true;

					if(didReach(arr , visited,(x + 1) ,y ,dest_x ,dest_y ,n ,m) == true)		/// right
						return true;

					if(didReach(arr , visited,x , (y + 1) ,dest_x ,dest_y ,n ,m) == true)	/// down
						return true;

					if(didReach(arr , visited,(x - 1) ,y ,dest_x ,dest_y ,n ,m) == true)		/// left
						return true;


					return false;
}
