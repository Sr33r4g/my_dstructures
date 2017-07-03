
// https://www.codechef.com/COOK61/problems/XORNUBER

#include <stdio.h>
		///WORKS
int main(){
	//only odd numbers can be obtained as a reusult of XOR'ing
	int t;
	scanf("%d",&t);

	while(t--){

		int n;
		scanf("%d",&n);
		// printf("%d",n);

		int m = n/2;			///m+1
		int m_plus_1 = m + 1; 


		if((m ^ m_plus_1) == n)
			printf("%d\n",m);
		else
			printf("-1\n");
	}

	return 0;
}