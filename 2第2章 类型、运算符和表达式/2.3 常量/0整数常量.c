#include<stdio.h>

int main()
{
	0XFFFFFFFF;
	printf("%u\n",-1);
	printf("%u\n",0XFFFFFFFF);

	long unsigned ul=-1;
	printf("%lu\n",ul);

	int hex=15;
	//scanf("%p",&hex);//16十六进制输入
	//scanf("%d",&hex);//16十进制输入
	printf("%d\n",hex);
	printf("%x\n",hex);
	printf("%X\n",hex);
	printf("%#x\n",hex);
	printf("%08x\n",hex);
	printf("%#08x\n",hex);

	int hex2=32;
	printf("%x\n",hex2);
	//char buf[50]="1;
	//itoa(10,buf,2);
	//printf("%s\n",buf);
	
	printf("%ld\n",9223372036854775807L);
	printf("%lu\n",2*9223372036854775807UL);

	return 0;
}
