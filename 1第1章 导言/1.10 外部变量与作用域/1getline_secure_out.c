#include <stdio.h>
#define MAXLINE 5	// 允许的输入的最大长度

char line[MAXLINE];
char longest[MAXLINE];
int max;

int getline_wu_s(void);
void copy(void);

/* 打印最长的输入行 */
int main()
{	
	int len;	// 当前行长度
	extern int max;	// 临时的最长行长度// 显式声明
	//extern char longest[MAXLINE];	// 临时的最长行// 隐式声明

	max = 0;
	while((len=getline_wu_s()) > 0){
		if(max < len){max=len;copy();}
	}
	if(max > 0) printf("%d:%s", max, longest);
	return 0;
}

/* 安全！ 当输入字符长度大于MAXLINE不会段错误，而是截取前面部分*/
int getline_wu_s(void){
	int i, c, j=0;
	extern char line[];// 显式声明
	
	for(i=0; (c=getchar())!=EOF && c!='\n'; i++)
		if(i<MAXLINE-2) line[j++] = c;
	if(c=='\n'){
		line[j] = c;
		i++; j++;
	}
	line[j] = '\0';//j有效长度
	return i;//i原始长度
}

/* copy函数：将from复制到to */
void copy(){
	int i = 0;
	extern char line[], longest[MAXLINE];	// 显式声明
	while((longest[i]=line[i]) != '\n') i++;
}

