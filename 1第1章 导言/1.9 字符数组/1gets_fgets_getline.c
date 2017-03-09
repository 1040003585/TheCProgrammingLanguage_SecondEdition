#include <stdio.h>
#define MAXLINE 1000	/* 最大输入行长度 */

int getline(char line[], int max);
int getline_wu(char s[], int lim);
int getline_wu_s(char s[], int lim);
 
int main()
{
	char line[MAXLINE];
//	getline_wu_s(line,MAXLINE);//+'\n'
	fgets(line,MAXLINE,stdin);//+'\n'
// 	gets(line);//!'\n'
	printf("%s.",line);
	puts(line);//+'\n'
	fputs(line,stdout);//!'\n'
	puts("..........");
	
	return 0;
}


int getline(char s[], int lim){
	int c, i=0;
	while(--lim>0 && (c=getchar())!=EOF && c!='\n')s[i++]='\n';
	if(c=='\n')s[i++]=c;
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


