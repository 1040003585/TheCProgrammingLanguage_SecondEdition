
int main()
{
	//#include <stdio.h>

	int a='\13';
	putchar(a);putchar('\n');

	int a2='\x4a';
	putchar(a2);putchar('\n');
	
	#define VTAB8 '\013'	//ASCII纵向制表符
	#define BELL8 '\007'	//ASCII响铃符
	
	#define VTAB16 '\xb'	//ASCII纵向制表符
	#define BELL16 '\x7'	//ASCII响铃符
	
	return 0;
}

void fun(){
	puts("");
}
