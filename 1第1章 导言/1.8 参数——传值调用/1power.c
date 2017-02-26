#include <stdio.h>

//int power(int base, int n);
//int power(int b, int);
//int power(int , int);

int power(int base, int n){
	int p=1;
	for(;n>0;n--)//n为临时副本
		p*=base;
	return p;
}

int main()
{
	for(int i=0;i<10;i++){
		printf("%d %d %d \n", i, power(2,i), power(-3,i) );
	}	

	return 0;
}

