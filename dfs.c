#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int n;
	scanf("%d",&n);
	char l;
	int arr[n][n];memset(arr,0,(sizeof(arr[0][0]) * n * n));

	int start_i,start_j,end_i,end_j;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++){

			scanf(" %c",&l);

			switch(l){
				case 'S':{
					// printf("s\n");
					start_i = i;
					start_j = j;
					arr[i][j] = 0;
					break;
				}

				case 'T':
				case 'P':{
					// printf("t or p\n");
					arr[i][j] = ('t' ? 3 : 2);
					break;
				}

				case 'E':{
					// printf("e\n");
					end_i = i;
					end_j = j;
					arr[i][j] = 1;
					break;
				}
			}

		}

		int stack_i[n]; memset(stack_i,0,n);
		int stack_j[n]; memset(stack_j,0,n);
		int top = 0;

		bool visited[n][n]; memset(visited,0,(sizeof(visited[0][0]) * n * n));

		top++;
		stack_i[top] = start_i;
		stack_j[top] = start_j;

		find_path(start_i,start_j,end_i,end_j,n,arr,visited);


		printf("\n---------displaying----------\n");
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n ;j++)
				printf("%d ",arr[i][j]);
			printf("\n");
		}

	return 0;
}

void find_path(int x, int y, int end_i, int end_j, int n, int *arr, bool *visited){

	if(x < 0 || x > n || y < 0 || y > n){
		return;
	}

	if(x == end_i && y == end_j){
		printf("Got it");
	}
	else{
		printf("Searching....\n");
	}

	if((*(arr + x) + y) == 'P' && !(*(visited + x) + y)){

	// (*(visited + x) + y) = 1;

	find_path(x,y-1,end_i,end_j,n,arr,visited);
	find_path(x-1,y,end_i,end_j,n,arr,visited);
	find_path(x,y+1,end_i,end_j,n,arr,visited);
	find_path(x+1,y,end_i,end_j,n,arr,visited);

	}
	else{
		printf("Something else....\n");
		return;
	}
}