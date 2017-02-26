#include <stdio.h>

int power();
//int power(int ,int);

int main()
{
	for(int i=0;i<11;i++){
		printf("%d %d %d \n", i, power(2,i), power(-3,i) );
	}	

	return 0;
}

/*早期C语言版本中的实现方法*/
power(base, n)
//int power(base, n)
int base, n;
{
	int p=1;
	for(int i=0;i<n;i++)p*=base;
	return p;
}
