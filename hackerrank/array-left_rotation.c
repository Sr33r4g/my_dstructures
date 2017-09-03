

// 	https://www.hackerrank.com/challenges/array-left-rotation

#include <stdio.h>
		///WORKS
int main(){

	int n,d;
	scanf("%d %d",&n,&d);

	int arr[n]; memset(arr,0,n);

	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	
	int val = n / d;
    
	int i = 0;
	do{
		printf("%d ",arr[(i+d) % n]);
		// i++;
	}while(d != ((++i + d)%n));



	return 0;
}