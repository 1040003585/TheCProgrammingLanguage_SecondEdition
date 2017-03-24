#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>//exit

void error(char *fmt, ...){
	va_list args;
	va_start(args, fmt);
	fprintf(stderr, "Error_WU: ");
	vfprintf(stderr, fmt, args);
	fprintf(stderr, "\n");
	va_end(args);
	exit(1);
}

int main(){
	error("helllo,error");
	return 0;
}
