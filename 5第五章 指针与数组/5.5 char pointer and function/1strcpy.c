#include <stdio.h>

void strcpy1(char *s, char *t){
	int i=0;
	//while((s[i]=t[i])!='\0')i++;//hello, world
	//while((s[i]=t[i])!='\0')++i;//hello, world
	//while((s[i]=t[i++])!='\0');//hello, world//s[0],t[0],t=1
	//while((s[i]=t[++i])!='\0');//ello, worlds//s[0],i=1,t[1]
	//while((s[i++]=t[i])!='\0');//ello, world//s[0],i=1,t[1]
	while((s[++i]=t[i])!='\0');//'\0ello, world'//i=1,s[1],t[1]
}

void strcpy2(char *s, char *t){
	while((*s=*t)!='\0'){s++;t++;}
}

void strcpy3(char *s, char *t){
	while((*s++=*t++)!='\0');
}

void strcpy4(char *s, char *t){
	while(*s++=*t++);
}

int main()
{
	char s1[100], s2[100], s3[100], s4[100], t[]="hello, world";
	strcpy1(s1,t);	s1[0]='#';
	strcpy2(s2,t);	
	strcpy3(s3,t);	
	strcpy4(s4,t);
	puts(s1);
	puts(s2);
	puts(s3);
	puts(s4);
	return 0;

}
