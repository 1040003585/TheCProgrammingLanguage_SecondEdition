#include <stdio.h>

int power(int base, int n);
//int power(int b, int);
//int power(int , int);

int main()
{
	for(int i=0;i<10;i++){
		printf("%d %d %d \n", i, power(2,i), power(-3,i) );
	}	

	return 0;
}

int power(int base, int n){
	int p=1;
	for(int i=0;i<n;i++)p*=base;
	return p;
}
