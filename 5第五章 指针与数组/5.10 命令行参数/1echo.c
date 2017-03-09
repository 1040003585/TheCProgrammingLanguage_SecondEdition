#include <stdio.h>

/* 回显程序命令行码数：版本1 */
int main(int argc, char *argv[])
{
	for(int i=1;i<argc;i++){
		printf("%s%s", argv[i],(i<argc-1)?" ":"\n");
	}
	return 0;
}
