#include <stdio.h>
#include <stdbool.h>

typedef struct n{
	struct n * next;
	int data;
	int c;
}node;

void insert(node *,int);

int main(void) {
	int n,m;
	scanf("%d %d",&n,&m);
	node * root[n+1];
	bool visited[n]; memset(visited,0,n);
	
	for(int i = 0; i <= n; i++)
		*(root + i) = NULL; 	///(node * ) (malloc(sizeof(node)));
	
	while(m--){
		int x,y;
		scanf("%d %d",&x,&y);

		insert((root + x),y);
		insert((root + y),x);
	}
	
	
	printf("\n");
	for(int i = 1; i <= n; i++){
		printf("%d : ",i);
	display(*(root + i));
	}
	

	printf("\n-------BFS------\n");
	// bfs(());
	return 0;
}

void insert(node * n, int k){
	
	while(n->next != NULL){
		n = n->next;
	}	
	node * temp = (node *) (malloc(sizeof(node)));
	temp->next = NULL;
	temp->data = k;
	n->next = temp;
	
}


void display(node *n){
	while(n != NULL){
		printf("%d -> ",n->data);
		n = n->next;
	}
	printf("\n");
}

void bfs(node * root, bool  * visited, int n){

	int head = 0, tail = 0;
	node *queue[n];			///just a test value

	for(int i = 0; i < n; i++)			///all to null
		*(queue + i) = NULL;

	queue[tail] = root;
	visited[1] = 1;
	tail++;

	while(head != tail){

	node * current_node = queue[head];
	head++;

	while(current_node != NULL){

			if(!visited[current_node->data])
			{
				queue[tail] = current_node;
				visited[current_node->data] = 1;
				tail++;
			}

			current_node = current_node->next;
		}

	}


}