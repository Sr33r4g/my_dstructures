#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
	*****************************
	Size of Longest Common 
	Subsequence using Dynamic Programming
	*****************************
*/


int main(){

		char s1[100];
		char s2[100];


		scanf("%[^\n]%*c",s1);
								// fgets(s1,100,stdin);    		//scanf("%[^\n]s",s1);
		// printf("%s\n",(s1));
								// fgets(s2,100,stdin);
		// scanf("%[^\n]%*c",s2);
		// printf("%s\n",(s2));

		int memoize[strlen(s1)][strlen(s2)]; memset(memoize,0,sizeof(memoize[0][0]) * strlen(s1) * strlen(s2));

		LCS(s1,s2,strlen(s1),strlen(s2));

		return 0;
}

int LCS(char * s1, char * s2, int l1, int l2){

		if(l1 == 0 || l2 == 0)
			return 0;

		if(*(s1 + (l1-1)) == *(s2 + (l2-1)))

		if(*(s1 + (l1-1)) != *(s2 + (l2-1)))

}