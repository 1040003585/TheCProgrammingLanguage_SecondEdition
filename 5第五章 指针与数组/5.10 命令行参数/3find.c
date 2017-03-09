#include <stdio.h>
#include <string.h>

int strindex(char const source[], const char searchforpattern[]);
char source[]="abcdefghijklmnoqprstuvwxyz"; 	/* 待查找的模式 */
 
int main(int c, char * v[])
{
	if(c!=2){puts("Usage: find pattern");}
	else{
		int found=0;
		if(strstr(source, v[1]) != NULL){
			printf("[+] '%s' at '%s''s %d\n", v[1], source);
			found=1;
		}
		if(found)puts("[+] found");
		else puts("[-] not found");
	} 
	return 0;
}

