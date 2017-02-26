#include <stdio.h>
#define MAXLINE 5	// 允许的输入的最大长度

int getline_wu(char line[], int maxline);
void copy(char from[], char to[]);

/* 打印最长的输入行 */
int main()
{	
	int len;	// 当前行长度
	int max;	// 临时的最长行长度
	char line[MAXLINE];	// 当前的输入行
	char longest[MAXLINE];	// 临时的最长行

	max = 0;
	//while((fgets(line, MAXLINE, stdin)) != NULL){len=strlen(line);//fgets也是不安全！
	while((len=getline_wu(line, MAXLINE)) > 0){
		if(max < len){max=len;copy(line, longest);}
	}
	if(max > 0) printf("%s", longest);
	return 0;
}

/* getline函数：将一行读入到s中并返回基长度。不安全！ 当输入字符长度大于MAXLINE会段错误*/
// getline_wu(char s[], int lim){ //ok  warning: return type defaults to ‘int’ [-Wimplicit-int]
int getline_wu(char s[], int lim){
	int i, c;
	
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
		s[i] = c;
	if(c=='\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';//
	return i;
}

/* copy函数：将from复制到to */
void copy(char from[], char to[]){
	int i = 0;
	while((to[i]=from[i]) != '\n') i++;
}
