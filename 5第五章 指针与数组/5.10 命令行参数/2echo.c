#include <stdio.h>

/* ���Գ��������в������汾2 */
int main(int argc, char *argv[])
{
	while(--argc){
		//printf("%s%s", *++argv, argc>1?" ":"\n");
		printf(argc>1?"%s ":"%s\n", *++argv); 
	}
	return 0;
}
