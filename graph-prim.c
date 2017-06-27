#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
				///Prim's algorithm


typedef struct n{
	struct n * next;
	int key;
	int weight;
}nodes;

int prim(int *, int, bool *);
int *smallest(int *, int);

static int arr[10000][10000];

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	bool visited[n]; memset(visited,0,n);

	for(int i = 0; i < n; i++)
		*(*(arr+i)+i) = 999;


	for(int i = 0; i < m; i++){

		int x,y,weight;
		scanf("%d %d %d",&x,&y,&weight);

		*(*(arr + (x - 1)) + (y - 1)) = weight;
		*(*(arr + (y - 1)) + (x - 1)) = weight;

		

	}


	printf("------------------DISPLAY-----------------\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			printf("%d   ",*(*(arr + i) + j));
	printf("\n");
	}
	printf("----------------END-DISPLAY---------------\n");

	///int min_cost = prim(0);

	printf("%d\n",prim(arr,n,visited));

	return 0;
}




int prim(int * arr,int max_array_size, bool * visited){
	int i = 0;
	int max = max_array_size;
	int min_cost = 0;						/// the variable of interest!
	while(max_array_size--){
		int * coord;
		coord = smallest((arr + max_array_size * i),max_array_size);
		i = *(coord + 0);
		
		*(visited + i) = 1;			//mark as visited
		min_cost += *(coord + 1);
	}

	return min_cost;

}	




int * smallest(int * arr, int max_size){		/// this will get the smallest value from the array and reinitialize 
											///its coordinate value to -1001 before returning it
	int small =1001;
	int index_with_smallest_value = 0;
	for(int i = 0; i < max_size; i++){
		// smallest = () ? *(arr + i) : smallest ;
	
		if(*(arr + i) < small){
			small = *(arr + i);
			index_with_smallest_value = i;
		}
	}

	*(arr + index_with_smallest_value) =1001;
	static int smallest[2];
	smallest[0] = index_with_smallest_value;
	smallest[1] = small;

	printf("------------------------\n");
	printf("smallest[0] : %d\n",smallest[0]);
	printf("smallest[1] : %d\n",smallest[1]);
	printf("------------------------\n");
	return smallest;
}





[]
|
|
|
|	
[]	