//INSERTION SORT QUESTION

/// QUESTION : https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/the-rise-of-the-weird-things-1/

#include <stdio.h>
#include <stdlib.h>

void zombie(int *, int *, int *, int);
void vampire(int *, int *, int *, int);

int main(){
	int n;
	scanf("%d",&n);
	int zombies[n];		 ///even
	int vampires[n];	///odd
	int total_zombie_power = 0;
	int total_vampire_power = 0;

	int zcount = 0,vcount = 0;

	for(int i = 0; i < n; i++){
		int monster = 0;
		scanf("%d",&monster);

		if(monster % 2 == 0){	/// its a zombie!
			zombie(zombies,&zcount,&total_zombie_power,monster);
		}
		else{		///its a vampire!!

			vampire(vampires,&vcount,&total_vampire_power,monster);
		}
	}


		for(int i = 0; i < zcount; i++)
			printf("%d ",*(zombies + i));
	
		printf("%d ",total_zombie_power);
		
		for(int i = 0; i < vcount; i++)
			printf("%d ",*(vampires + i));
	
		printf("%d",total_vampire_power);
	


	return 0;
}


void zombie(int * zombies, int * zcount, int * total_zombie_power,int monster){
	*(zombies + *zcount) = monster;
	*total_zombie_power = *total_zombie_power + monster;
	*(zcount) += 1;
	insertion_sort(zombies,zcount);

}

void vampire(int * vampires, int * vcount, int * total_vampire_power,int monster){
	*(vampires + *vcount) = monster;
	*total_vampire_power = *total_vampire_power + monster;
	*(vcount) += 1;
	insertion_sort(vampires,vcount);
}

void insertion_sort(int * v, int * n){

	//insertion sort
	for(int i = 0; i < *n; i++){
		int temp = *(v + i);
		int j = i;

		while(j > 0 && temp < *(v + (j - 1))){
			*(v + j) = *(v + (j - 1));
			j--;
		}
		*(v + j) = temp;
	}


}
