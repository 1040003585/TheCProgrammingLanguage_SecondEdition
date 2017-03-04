#include<stdio.h>

int Strlen(char s[]){
	int i=0;
	while(s[i]!='\0')i++;
	return i;
}

int main()
{
	"I am a string"
	"";
	puts("hello, " "world");
	puts("hello, ""world");
	puts("hello, "
			"world");
	printf("%d\n", Strlen("hello, " "world"));

	return 0;
}

