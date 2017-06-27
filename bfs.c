#include <stdio.h>
#include <stdbool.h>

// CHECKING IF IT WORKS THE SPIRAL WAY

void burnit(int n,int m,int  N,int M,bool * arr,int nations){
    // the direction is clockwise...
    // printf("arr[%d][%d]--- %d\n",n,m,(*(arr + n) + m));

    printf("Before : n : %d and m : %d\n",n,m);

    if(n < 0 || n > N || m < 0 || m > M)
        return;

    printf("N : %d\n",N);
    printf("M : %d\n",M);

    if(((int)(*(arr + n) + m) == 0) || ((int)(*(arr + n) + m) == -1))		//ERROR HERE...BUT WHAT!?
        return;


    if((int)(*(arr + n) + m) == 1){
        (*(arr + n) + m) == -1;
        printf("Nations in burnit : %d\n",nations);
        nations--;
    }

    printf("After : n : %d and m : %d\n",n-1,m-1);

    burnit(n-1,m,arr,N,M,nations);		//12:00
    // burnit(n-1,m+1,arr,N,M,nations);
    burnit(n,m+1,arr,N,M,nations);		//3:00
    // burnit(n+1,m+1,arr,N,M,nations);
    burnit(n+1,m,arr,N,M,nations);		//6:00
    // burnit(n+1,m-1,arr,N,M,nations);
    burnit(n,m-1,arr,N,M,nations);		//9:00
    // burnit(n-1,m-1,arr,N,M,nations);

}



int main(){

    int N = 0,Q = 0,M = 0;
    int nations = 0;			///total no. of nations
    int burned = 0;				//nations burned.... [[[[[[[[[[[not required i believe]]]]]]]]]]]
    scanf("%d %d %d",&N,&M,&Q);
    // printf("\nValues : %d %d %d\n",N,M,Q);

    bool arr[N][M];
    memset(arr,0,(sizeof(arr[0][0]) * N * M));

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++){
            scanf("%d",&(arr[i][j]));
            if(arr[i][j])
                nations++;
        }
    printf("arr of 0,2 : %d\n",arr[0][2]);

    for(int i = 0; i < Q; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("Sending x-1 : %d and y-1 : %d\n",x-1,y-1);
        burnit(x-1,y-1,N,M,arr,nations);

        printf("Nations : %d\n",nations);
    }




///---------------------------------------------------------TESTING AREA---------------------------------------------------------------///

    ///To check the outputs of large array of inputs
    /*FILE * f = fopen("file.txt","w");

    if(f == NULL){
        printf("Some error....");
        exit(1);
    }

    fprintf(f,"%d\n",paths_travelled());*/





    return 0;
}