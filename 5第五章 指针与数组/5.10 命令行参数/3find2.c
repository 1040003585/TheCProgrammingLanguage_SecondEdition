#include <stdio.h>
#include <string.h>
#define MAXLINE 100

int getline(char *line, int max);
 
/* find函数：打印与第一个参数指定的模式匹配的输入行 */ 
int main(int argc, char * argv[])
{
	char line[MAXLINE];
	int found=0;	
	if(argc!=2){puts("Usage: find pattern");}
	else{
		while(getline(line, MAXLINE) >0 ){
			if(strstr(line, argv[1]) != NULL){
				printf("[+] '%s' at '%s''\n", argv[1], line);
				found++;
			}
		}
		printf("[*] find %d lines", found);
	} 
	return 0;
}

int getline(char s[], int lim){
	int c, i=0;
	while(--lim>0 && (c=getchar())!=EOF && c!='\n')s[i++]=c;
	//if(c=='\n')s[i++]=c;
	s[i]='\0';
	return i;
}

