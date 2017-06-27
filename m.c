#include <stdio.h>
#include <stdbool.h>

void right(bool *, bool ,int, int *,int);
void left(bool *, bool ,int, int *);

int main(){

    int n;
    scanf("%d",&n);
    
    bool arr[n]; memset(arr,0,n);

    for(int i = 0; i < n-1 ;i++)
        scanf("%d",(arr + i));


    for(int i = 0; i < n-1 ;i++)
        printf("%d ",*(arr + i));

    bool flag = true;   //true = forward direction .... false = reverse direction

    char choice;

    int q; scanf("%d",&q);

    while(q--){
        int reachable = 1;
        scanf(" %c",&choice);
        if(choice == 'U'){
            printf("Chose u\n");
            flag = !flag;
        }
        else if(choice == 'Q')
        {
            printf("Chose q\n");
            int position;
            scanf("%d",&position);
            position -= 1;
            right(arr,flag,(position),&reachable,(n-1));
            left(arr,flag,(position),&reachable);
            printf("reachable : %d\n",reachable);
        }

    }


    return 0;
}

void right(bool * arr, bool flag, int position, int * reachable,int n){
    
    if(flag){
            while(*(arr + position)  && (position <= n)){
                    (*reachable)++;       //some problem here       
                    printf("p : %d\n",*reachable);
                    position++;
                }
            }
    else{
            while(!(*(arr + position)) && (position <= n)){
            printf("in right else\n");
                (*reachable)++;       //some problem here
                position++;
            }
        }
}

void left(bool * arr, bool flag, int position, int * reachable){

    printf("in left\n");
    if(flag)
        while(*(arr - position) && (position >= 0)){
            (*reachable)++;       //some problem here
            printf("p : %d\n",*reachable);
            position--;
        }
    else
        while(!(*(arr - position)) && (position >= 0)){
            (*reachable)++;       //some problem here
            position--;
        }
}