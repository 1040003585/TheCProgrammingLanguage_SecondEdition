#include <stdio.h>
#define DATA 142	//<256

/* 返回x中从右边数第p位开始的右边n位 （p:76543210）*/
unsigned getsomebits(unsigned x,int p,int n){
	return (x>>(p+1-n)) & ~(~0<<n);
}

char bit[9],len;
void decimalToBit(int n){
	len=0;
	while(n){
		bit[len++]=n%2+'0';
		n/=2;
	}
	while(len<8)bit[len++]='0';//
	bit[len]='\0';
	for(int i=0;i<len/2;i++){
		char c=bit[i];
		bit[i]=bit[len-i-1];
		bit[len-i-1]=c;
	}
}

int main()
{
	int n=DATA;
	decimalToBit(n);printf("%s\n",bit);
	n=n&017;	
	decimalToBit(n);printf("%s\n\n",bit);
	
	n=DATA;
	decimalToBit(n);printf("%s\n",bit);
	n=n&~017;
	decimalToBit(n);printf("%s\n\n",bit);

	int x=DATA;	
	printf("%d\n",getsomebits(x,4,3));
	decimalToBit(getsomebits(x,4,3));
	printf("%s\n",bit);

	return 0;
}
