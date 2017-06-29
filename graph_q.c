#include <stdio.h>

int main(){
    
    int n = 0,m = 0,k = 0;
    scanf("%d %d %d",&n,&m,&k);
    
    int maxRowval[n];           //setting the maximum no. of values in a row
    memset(maxRowval,0,sizeof(maxRowval));
    
    int x = 0,y = 0;
    int val[n];
    memset(val,0,sizeof(val));
    
    int adj[m][m];
    memset(adj,0,sizeof(adj));
    for(int i = 1; i <= n; i++){
        
        scanf("%d",&val[i-1]);
    }
    
    while(m--){
        scanf("%d %d",&x,&y);
        
        if(adj[x][y] == 0){     //setting values in the array
            adj[x][y] = val[y - 1];
            maxRowval[x]++;
            adj[y][x] = val[x - 1];
            maxRowval[y]++;
            printf("values set.....\n");
        }
        
        
    }
    return 0;
}