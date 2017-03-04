#include <stdio.h>

unsigned long int next=1;
void srand(unsigned int seed){
	next=seed;
}
int rand(void){
	next=next*1103515245+12345;
	return (unsigned int)(next/65536)%32768;
}

int main()
{
	int seed;
	scanf("%d",&seed);
	srand(seed);
	printf("%d\n",rand());
	return 0;
}
