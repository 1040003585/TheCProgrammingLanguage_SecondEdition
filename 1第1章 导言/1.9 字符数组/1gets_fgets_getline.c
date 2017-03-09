#include <stdio.h>
#define MAXLINE 1000	/* ��������г��� */

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

/* getline��������һ�ж��뵽s�в����ػ����ȡ�����ȫ�� �������ַ����ȴ���MAXLINE��δ���*/
// getline_wu(char s[], int lim){ //ok  warning: return type defaults to ��int�� [-Wimplicit-int]
int getline_wu(char s[], int lim){
	int i, c;
	
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
		s[i] = c;
	if(c=='\n') s[i++] = c;
	s[i] = '\0';//
	return i;
}

/* ��ȫ�� �������ַ����ȴ���MAXLINE����δ��󣬶��ǽ�ȡǰ�沿��*/
int getline_wu_s(char s[], int lim){
	int i, c, j=0;
	
	for(i=0; (c=getchar())!=EOF && c!='\n'; i++)
		if(i<lim-2) s[j++] = c;
	if(c=='\n'){
		s[j] = c;
		i++; j++;
	}
	s[j] = '\0';//j��Ч����
	return i;//iԭʼ����
}


