#include <stdio.h>
#define MAXLINE 5	/* 最大输入行长度 */

int getline(char line[], int max);
int getline_wu(char s[], int lim);
int getline_wu_s(char s[], int lim);
int strindex(char const source[], const char searchforpattern[]);
char source[]="abcdefghijklmnoqprstuvwxyz"; 	/* 待查找的模式 */
 
int main()
{
	char pattern[MAXLINE];
	while(getline(pattern,MAXLINE) >0 ){
		int found=0;
		printf("%s\n",pattern);
		int index=strindex(source,pattern);
		if(index >=0 ){
			printf("[+] '%s' at '%s''s %d\n", pattern, source, index);
			found=1;
		}
		if(found)puts("[+] found");
		else puts("[-] not found");
	} 
	return 0;
}

int strindex(const char s[], const char p[]){
	for(int i=0;s[i]!='\0';i++){
		int j,k;
		for(j=i,k=0; p[k]!='\0'&&s[j]==p[k];j++,k++);
		if(k>0&&p[k]=='\0')return i;
	}	
	return -1;
}

int getline(char s[], int lim){
	int c, i=0;
	while(--lim>0 && (c=getchar())!=EOF && c!='\n')s[i++]=c;
	//if(c=='\n')s[i++]=c;
	s[i]='\0';
	return i;
}

/* getline函数：将一行读入到s中并返回基长度。不安全！ 当输入字符长度大于MAXLINE会段错误*/
// getline_wu(char s[], int lim){ //ok  warning: return type defaults to ‘int’ [-Wimplicit-int]
int getline_wu(char s[], int lim){
	int i, c;
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
		s[i] = c;
	if(c=='\n') s[i++] = c;
	s[i] = '\0';//
	return i;
}

/* 安全！ 当输入字符长度大于MAXLINE不会段错误，而是截取前面部分*/
int getline_wu_s(char s[], int lim){
	int i, c, j=0;
	
	for(i=0; (c=getchar())!=EOF && c!='\n'; i++)
		if(i<lim-2) s[j++] = c;
	if(c=='\n'){
		s[j] = c;
		i++; j++;
	}
	s[j] = '\0';//j有效长度
	return i;//i原始长度
}


