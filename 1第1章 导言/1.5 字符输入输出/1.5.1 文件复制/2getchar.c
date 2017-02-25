#include <stdio.h>

int main()
{
	int c;

	while((c=getchar()) != EOF){
		putchar(c);
	}// Ctrl+C

	printf("EOF: %d\n",EOF);

	return 0;
}
