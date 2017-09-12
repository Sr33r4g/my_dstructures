#include <stdio.h>
#include <windows.h>
/* count characters in input; 2nd version */
main()
{
	if(getchar() == '^c' || getchar() == '^C'){
		printf("Hello there....");
	}
}