#include <stdio.h>

/* ���Գ����������������汾1 */
int main(int argc, char *argv[])
{
	for(int i=1;i<argc;i++){
		printf("%s%s", argv[i],(i<argc-1)?" ":"\n");
	}
	return 0;
}
