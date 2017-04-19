#include <stdio.h>
//gcc main.c stack.c

#include "calc.h"	//define M //after above define M 200// #define MAXVAL1 100

#ifndef M
#define M 200
#endif

// #define MAXVAL1 200
// #define MAXVAL1 3200

int main()
{
	extern int sp;
	printf("M: %d\n", M);
	// printf("MAXVAL1: %d\n", MAXVAL1);

	push(1.1);
	printf("1:%d\n",sp);
	
	printf("%g\n",pop());
	printf("2:%d\n",sp);
	
	printf("%g\n",pop());	
	printf("3:%d\n",sp);	

	return 0;
}
