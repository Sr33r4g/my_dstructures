

///https://www.hackerrank.com/challenges/2d-array/problem

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int arr[6][6]; memset(arr,0,(sizeof(arr[0][0]) * 36));

	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 6; j++)
			scanf("%d",(*(arr + i) + j));


	int hourglass_sum = 0;

	for(int i = 0; i <= 3; i++){
		for(int j = 0; j <= 3; j++){

			int current_hourglass = 0;

			for(int z = 0; z < 3; z++)				
			{
				current_hourglass += arr[i][j+z];			 ///the top part
				current_hourglass += arr[i+2][j+z];		///the bottom part
				
			}

			current_hourglass += arr[i+1][j+1];		///the middle part

			hourglass_sum = (current_hourglass > hourglass_sum) ? current_hourglass : hourglass_sum;

		}
	}

	printf("%d",hourglass_sum);


	return 0;
}