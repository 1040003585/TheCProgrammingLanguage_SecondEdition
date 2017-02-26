#include <stdio.h>
#define MAXLINE 5	// 允许的输入的最大长度

int getline_wu_s(char line[], int maxline);
void copy(char from[], char to[]);

/* 打印最长的输入行 */
int main()
{	
	int len;	// 当前行长度
	int max;	// 临时的最长行长度
	char line[MAXLINE];	// 当前的输入行
	char longest[MAXLINE];	// 临时的最长行

	max = 0;
	while((len=getline_wu_s(line, MAXLINE)) > 0){
		if(max < len){max=len;copy(line, longest);}
	}
	if(max > 0) printf("%s", longest);
	return 0;
}


/* 安全！ 当输入字符长度大于MAXLINE不会段错误，而是截取前面部分*/
int getline_wu_s(char s[], int lim){
	int i, c, j=0;
	
	for(i=0; (c=getchar())!=EOF && c!='\n'; i++)
		if(i<lim-2){s[j] = c;j++;}
	if(c=='\n'){
		s[j] = c;
		i++;j++;
	}
	s[j] = '\0';//
	return i;
}

/* copy函数：将from复制到to */
void copy(char from[], char to[]){
	int i = 0;
	while((to[i]=from[i]) != '\n') i++;
}
