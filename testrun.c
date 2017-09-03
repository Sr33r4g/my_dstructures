

#include <stdio.h>
int main()
{
	int n,q;
	scanf("%d %d",&n,&q);

	int arr[n][100000]; memset(arr,0,(sizeof(arr[0][0])*n*100000));
	int size[n]; memset(size,0,n);
	int last_ptr[n]; memset(last_ptr,0,n);

	int lastAnswer = 0;

	for(int i = 0; i < q; i++){
		int first_query;
		int x,y;

		scanf("%d %d %d",&first_query,&x,&y);

		if(!(first_query-1)){			///query 1 x y

			int seq = (x ^ lastAnswer) % n;
			arr[seq][last_ptr[seq]++] = y;
			size[seq]++;

		}
		else{						/// query 2 x y

			int seq = (x ^ lastAnswer) % n;
			lastAnswer = arr[seq][y%size[seq]];
			printf("%d\n",lastAnswer);

		}

	}

	return 0;
}