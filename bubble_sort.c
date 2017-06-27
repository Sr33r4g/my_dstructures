#include <stdio.h>
#include <stdlib.h>

void bubble_sort(char *, int *, int);

int main(){

	int n,t;
	scanf("%d %d",&n,&t);
	char namelength[n][20];
	int fanquotient[n]; memset(fanquotient,0,n);

	for(int i = 0; i < n; i++){
		scanf("%s %d",(namelength + i),(fanquotient + i));
	}

	bubble_sort(namelength,fanquotient,n);

	for(int i = n; i > (n-t); i--)
		printf("%s\n",*(namelength + i));

	return 0;
}

void bubble_sort(char * name,int * fanquotient, int n){			///this is very problematic
	
	char * temp;

	for(int i = 0; i < n-1; i++)		///Michael Bub(b)le sort (jk :P)
		for(int j = 0; j < (n-i-1); j++){
			if(*(fanquotient + j) > *(fanquotient + (j+1))){
				int temp = *(fanquotient + j);
				*(fanquotient + j) = *(fanquotient + (j + 1));
				*(fanquotient + (j + 1)) = temp; 
			
				// swap names
				temp = (name + j);
				*(name + j) = *(name + j + 1);
				*(name + j) = temp;

			}
			else if(*(fanquotient + j) == *(fanquotient + (j+1))){
				if(!lexico(name,name + 1,sizeof(name),sizeof(name+1))){		/// first name is greater than second
					int temp = *(fanquotient + j);
				*(fanquotient + j) = *(fanquotient + (j + 1));
				*(fanquotient + (j + 1)) = temp; 
				}
				
			}
		}

}

int lexico(char * a, char * b, int size_a, int size_b){
	int biggest = (size_a > size_b) ? size_a : size_b;		///to get the size of the largest srting 

	for(int i = 0; i < biggest; i++){
		if(*(a + i) > *(b + i))
			return 0;
		else
			return 1;
	}
}

/*
void bubble_sort( int A[ ], int n ) {	///hackerearth's BS
    int temp = 0;
    int swap = 0;
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                // here swapping of positions is being done.
                swap++;
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
    printf("%d",swap);
}*/