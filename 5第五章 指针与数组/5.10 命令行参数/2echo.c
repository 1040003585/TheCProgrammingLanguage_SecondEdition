#include <stdio.h>

/* 回显程序命令行参数：版本2 */
int main(int argc, char *argv[])
{
	while(--argc){
		//printf("%s%s", *++argv, argc>1?" ":"\n");
		printf(argc>1?"%s ":"%s\n", *++argv); 
	}
	return 0;
}
