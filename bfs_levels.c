#include <stdio.h>
#include <stdbool.h>

int main(){
	int N = 0;
	scanf("%d",&N);

	bool visited[N]; memset(visited,0,N);
	int level[N]; memset(level,0,N);		///level visit indicator
	bool arr[N][N];	memset(arr,0,(sizeof(arr[0][0]) * N * N));	
	
	int queue[N], head = 0, tail = 0;			/// the queue and its head and tail 
	int a,b;		/// i and j
	int current_node = 0;

	for(int i = 0; i < (N-1); i++){		///filling the adjacency matrix 
		scanf("%d %d",&a,&b);
		arr[a - 1][b - 1] = 1;
		arr[b - 1][a - 1] = 1;
	}
	
	int nodes_in_levelx = 0;
	int x = 0;			///level no. x
	scanf("%d",&x);
	x -= 1;
	///real work starts from here......

	queue[tail]	= 0;
	tail++;	
	visited[0] = 1;		///you have visited the root
	level[0] = 0;

	while(head != tail){
		current_node = queue[head];
		head++;
		for(int i = 1 ;i < N; i++){
		
			if(arr[current_node][i] && !visited[i]){
				queue[tail] = i;
				tail++;
				visited[i] = 1;
				level[i] = level[current_node] + 1;
				if(level[i] == x)
					nodes_in_levelx++;

			}
		}
	}

	printf("%d",nodes_in_levelx);


	//----------------------------------------------testing------------------------------------------------

	// int level_test = 0;
	
	/*for(int i = 0; i < N ;i++){
		printf("\nNode %d : %d ",(i+1),level[i]);
		int j = 0;
		while(j < N){
			if(level[i] == j)
				// printf("%d ",j);
			j++;
		}
		level_test++;
	}*/

	/*int cnt = 0;
	for(int i = 0; i < N; i++){
		printf("Node %d : ",i);
		for(int j = 0; j < N; j++){
			printf("%d ",arr[i][j]);
			if(arr[i][j])
				cnt++;
		}
		printf("\n");
	}
	printf("count : %d",cnt);*/

	return 0;
}