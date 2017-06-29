#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int n;
	scanf("%d",&n);
	int stack[n]; memset(stack,0,n);
	int top = -1;
	int input[n]; memset(input,0,n);

	stack[top] = -1;
	int longest_subarray = 0;
	int current_longest = 0;
	for(int i = 0;i < n; i++){

		scanf("%d",(input + i));


		if(*(input + i) < 0){	//closing parenthesis

			if(top == -1)
			{
				stack[++top] = i;
			}
			else if(*(input + *(stack + top)) == -*(input + i)){			/// eg. '(' and ')'
					printf("got a pair\n");
					int index = stack[--top];
					current_longest = i - index;
					printf("Value obtained is : %d\n",current_longest);
			}
			else if(*(input + *(stack + top)) < 0 && *(input + i) < 0){		/// eg. ']' and ')'
					printf("entered and top are both negative\n"); 
					stack[top] = i;
			}
			else if( (*(input + *(stack + top)) < 0 && *(input + i) > 0) || (*(input + *(stack + top)) > 0 && *(input + i) < 0) ){	/// eg. )[ or ](
				stack[++top] = i;
			}
			
			longest_subarray = (current_longest > longest_subarray) ? current_longest: longest_subarray;
		}	

		else if(*(input + i) > 0){		       	///eg. '(' and '('

			stack[++top] = i;		//push if the value is positive

		}		

		

	}
	printf("ls : %d\n",longest_subarray);



	return 0;
}