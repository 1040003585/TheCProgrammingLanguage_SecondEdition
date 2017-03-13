#include <stdio.h>
#include "calc.h"//extern pop and push
//gcc main.c stack.c
int main()
{
	extern char stack[];
	puts(stack);

	push(1.1);
	//printf("1:%d\n",sp);
	printf("pop1:%g\n",pop());
	//printf("2:%d\n",sp);
	printf("pop2:%g\n",pop());	
	//printf("3:%d\n",sp);	

	return 0;
}
