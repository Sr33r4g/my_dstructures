	///https://www.hackerrank.com/challenges/torque-and-development

#include <stdio.h>
#include <stdbool.h>

int main(){

	int n, m, clib, croad;
	int q; scanf("%d",&q);
	
	while(q--){

	scanf("%d %d %d %d",&n,&m,&clib,&croad);
	long long int total_components = 0;
	 bool arr[n][n]; memset(arr,0,(sizeof(bool) * n * n));
	// bool * arr = malloc(sizeof(bool) * n * n);				//store it in the heap
	 bool visited[n]; memset(visited,0,n);
	
	for(int i = 0; i < m; i++){
		int x,y;
		scanf("%d %d",&x,&y);
		long long int x_n = (x - 1) * n; 
		long long int y_n = (y - 1) * n;
		*(*(arr + (y - 1)) + (x - 1)) = 1;
		*(*(arr + (x - 1)) + (y - 1)) = 1;


		// *((arr + (long long int) ((y - 1)*n)) + (x - 1)) = 1;
		// *((arr + (long long int) ((x - 1)*n) ) + (y - 1)) = 1;

	}

	if(clib <= croad){
		printf("%d\n",(clib * n));
	}
	else{
		int search_till = clib / croad;
		for(int i = 0; i < n; i++){

			if(!visited[i]){
				dfs(arr,visited,i,n);
				total_components++;
			}
		}

		total_components = (total_components * clib) + ((n-1) * croad);

		printf("%lld\n",total_components);
	}

	}

	return 0;
}





void dfs(bool * arr, bool * visited,int current_node, int n){

	*(visited + current_node) = 1;

	for(int i = 0; i < n; i++){
		if(!*(visited + i) && *(arr + (current_node * n) + i)){
			dfs(arr,visited,i,n);
		}
	}
}
