#include <stdio.h>
<<<<<<< HEAD
=======
#include "calc.h"//extern pop and push
>>>>>>> d45d26fb5d103442bd7fcd485026219313af10f7
//gcc main.c stack.c

#include "calc.h"	//define M //after above define M 200// #define MAXVAL1 100

#ifndef M
#define M 200
#endif

// #define MAXVAL1 200
// #define MAXVAL1 3200

int main()
{
<<<<<<< HEAD
	extern int sp;
	printf("M: %d\n", M);
	// printf("MAXVAL1: %d\n", MAXVAL1);
=======
	extern char stack[];
	puts(stack);
>>>>>>> d45d26fb5d103442bd7fcd485026219313af10f7

	push(1.1);
	//printf("1:%d\n",sp);
	printf("pop1:%g\n",pop());
	//printf("2:%d\n",sp);
	printf("pop2:%g\n",pop());	
	//printf("3:%d\n",sp);	

	return 0;
}
