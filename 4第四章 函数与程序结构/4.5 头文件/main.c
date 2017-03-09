#include <stdio.h>
#include "calc.h"
//gcc main.c stack.c
int main()
{
	extern int sp;

	push(1.1);
	printf("1:%d\n",sp);
	
	printf("%g\n",pop());
	printf("2:%d\n",sp);
	
	printf("%g\n",pop());	
	printf("3:%d\n",sp);	

	return 0;
}
