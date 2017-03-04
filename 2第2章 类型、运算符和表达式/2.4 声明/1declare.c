#include <stdio.h>

int mystrlen(const char s[]);
//上下文隐式声明，外部变量和静态变量将被初始化为0
int global;

int main()
{
	//显式声明
	int lower, upper, step;
	char c, line[1000];

	int lower2;	//
	int upper2;	//
	int step2;	//
	char c2;
	int line2[1000];

	//声明并初始化
	#define MAXLINE 100
	char esc='\\';
	int i=0;
	int limit=MAXLINE+1;
	float eps=1.0e-5;

	//const常量
	const double e=2.71828182845905;
	const char msg[]="warning ...";
	//e=2.71828;//1declare.c:27:3: error: assignment of read-only variable ‘e’
	
	char s[]="hello, " "world";
	printf("%d\n", mystrlen(s));
	printf("%s\n", s);

	return 0;
}

int mystrlen(const char s[]){
	//s[0]='0';//s不能被修改
	int i=0;
	while(s[i]!='\0')i++;
	return i;
	
}

