#include <stdio.h>
#include <unistd.h>
#define BUFSIZE 1000

#undef getchar

int getchar(void){
	char c;
	return (read(0,&c,1)==1 ? (unsigned char)c : EOF);
}


int main()
{
	int c;
	while((c=getchar())!=EOF){
		putchar(c);
	}
	return 0;
}
