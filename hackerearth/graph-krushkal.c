#include <stdio.h>
#include <stdlib.h>

/*
	************************
	Krushkal's MST
	Returns the weight of the
	MST
	************************
*/
typedef struct edge{

		int x,y;	
		int edge;
}ep;

typedef struct elist{
	ep edge_pair[1000];
}edgelist;


int cmpr(void const * , void const *);
int krushkal(int *,edgelist, int);
int root(int *, int);
void unionX(int *, int , int);


int main(){

	int n,m;
	scanf("%d %d",&n,&m);
	
	edgelist e;

	int roots[n]; memset(roots,0,n);
	for(int i = 0; i < n;i++){
		roots[i] = i;
	}


	for(int i = 0; i < m; i++){
		int xx,yy,edgy;
		scanf("%d %d %d",&xx,&yy,&edgy);		
		

		e.edge_pair[i].x = xx-1;
		e.edge_pair[i].y = yy-1;
		e.edge_pair[i].edge = edgy;

}


	qsort(e.edge_pair,m,sizeof(ep),cmpr);

	
	int mc = krushkal(roots,e,m);
	printf("%d",mc);


	return 0;
}



int cmpr(const void * a, const void * b){

	ep * ep1 = (ep *) a;
	ep * ep2 = (ep *) b;
	return (ep1->edge - ep2->edge);
}

int krushkal(int * roots,edgelist el, int m){

	int a,b,edge;
	int min_cost = 0;
	for(int i = 0; i < m; i++){
		a = el.edge_pair[i].x;
		b = el.edge_pair[i].y;
		edge = el.edge_pair[i].edge;

		if(root(roots,a) != root(roots,b)){
			
			min_cost = min_cost + edge;

			unionX(roots,a,b);
		}

	}

	return min_cost;
}



int root(int * roots,int x){
	while(*(roots + x) != x){

		*(roots + x) = *(roots + *(roots + x));		///get the grandpa!
		x = *(roots + x);
	}
	return x;
}


void unionX(int * roots,int x, int y){

	int a = root(roots,x);
	int b = root(roots,y);

	*(roots + b) = a;
}
