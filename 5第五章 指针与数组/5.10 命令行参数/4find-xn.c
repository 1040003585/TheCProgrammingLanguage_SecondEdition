#include <stdio.h>

/* 处理 find -x -n patternstring 或 find -xn patternstring
	argc: 表示还没有处理的参数数目 
	argv: 指向这些未处理参数中的第一个参数 
*/ 
int main(int argc, char *argv[])
{
	int c, except=0, number=0, found=0;
	while(--argc>0 && (*++argv)[0]=='-'){//在各个参数间遍历 
		while(c=*++argv[0]){//遍历一个特定参数串"-xn\0"的字符 
			switch (c){
				case 'x': except=1;break;
				case 'n': number=1;break;
				default : printf("find: illegal option %c\n", c);
						argc=0;	found=-1; break;
			}
		}
	}
	printf("argc: %d \n",argc);
	if(argc != 1){//0
		puts("Usage: 4find-xn -x -n pattern");
	}else{//argc==1: pattern
		printf("except: %d, number: %d\n",except, number);
	}
	return 0;
}
