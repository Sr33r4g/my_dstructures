#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define index 4

int cmpr(const void *, const void *);

			// static int a[1000000][1000000];
int main(){
			
	/*int n,t;
	scanf("%d %d",&n,&t);

	char name[n][20];
	int fanQ[n];

	for(int i = 0; i < n; i++){

		scanf("%s[^\n]",name[i]);
		scanf("%d",fanQ[i]);

	}
	printf("\n");
	for(int i = 0; i < n; i++){

		printf("%s : %d\n",name[i],fanQ[i]);

	}*/






	int a[index][index]; memset(a,0,(sizeof(a[0][0]) * index * index));

	for(int i = 0; i < index; i++)
		for(int j = 0; j < index; j++)
			*(*(a + i) + j) = 1;
	

	/*for(int i = 0 ; i < index ; i++){					//DISPLAYING
		for(int j = 0; j < index; j++){
			printf("%d\t",*(*(a + i) + j));
		}
		printf("\n");
	}*/


	disp(a,1,4);
	return 0;
}


///for qsort()
/*int cmpr(const void * x, const void * y){

	t * t1 = (t *) x;
	t * t2 = (t *) y;

	printf("a : %d b : %d\n",t1->y,t2->y);
	return (t1->y - t2->y);

}*/

/*void b_sort(){


}*/


void disp(int * a, int x, int y){

	
	// int z1 = 0, z2 = 0;

	// printf("\n%d \n", *(a + x + y));

	// scanf("%d %d",&z1,&z2);

	for(int i = 0 ; i < index ; i++){					//DISPLAYING
		for(int j = 0; j < index; j++){
			printf("%i\t",*(a + i + j)? 1 : 0);
		}
		printf("\n");
	}


	/*if(x < 0 || y < 0)
		return;

	if(x > index || y > index)
		return;

	printf("%d ", *(a + x + y));

	disp(a,x + 1,y);
	disp(a,x,y + 1);*/
	// disp(a,x - 1,y);
	// disp(a,x,y - 1);
	
}