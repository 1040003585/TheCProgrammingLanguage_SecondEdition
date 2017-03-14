#include <stdio.h>
#include <stdarg.h>

void minprintf(char *fmt, ...){
	va_list ap;
	va_start(ap,fmt);
	for(char *p=fmt;*p;p++){
		if(*p!='%'){
			putchar(*p);
			continue;
		}
		switch(*++p){
		int ival;double dval;
		case 'd': 
			 ival=va_arg(ap,int);
			printf("%d", ival);
			break;
		case 'f': 
			 dval=va_arg(ap,double);
			printf("%f", dval);
			break;
		case 's': 
			for(char *sval=va_arg(ap, char*);*sval;sval++)
				putchar(*sval);
			break;
		default: 
			putchar(*p);
			break;
		}
	}
	va_end(ap);
}

int main()
{
	minprintf("1:%d\n",123);
	minprintf("1:%d %f \n",12,.3);
	minprintf("2:%f\n",12.3);
	minprintf("3:d123\n");
	minprintf("3:%d,%123\n");
	minprintf("3:%s\n","hello, world");
	return 0;
}
