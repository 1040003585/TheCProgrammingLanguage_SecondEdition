#include <stdio.h>
#include <unistd.h>
#define BUFSIZE 1000

#undef getchar

int getchar0(void){
	char c;
	return (read(0,&c,1)==1 ? (unsigned char)c : EOF);
}

int getchar(void){
	static char buf[BUFSIZE];
	static char *bufp = buf;
	static int n = 0;
	
	if(n==0){ //buf is empty
		n = read(0, buf, sizeof buf);
		bufp = buf;
	}
	return (--n >= 0 ? (unsigned char) *bufp++ : EOF);
}

int main()
{
	int c;
	while((c=getchar())!=EOF){
		putchar(c);
	}
	return 0;
}
