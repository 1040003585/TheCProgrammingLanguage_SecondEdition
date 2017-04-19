#include <stdio.h>

struct point{	int x,y;};
int main(){
	struct rect{
		struct point pt1;
		struct point pt2;
	};
	struct rect r, *rp=&r;//must use&
	r.pt1.x=10;
	printf("%d\n", r.pt1.x);
	printf("%d\n", rp->pt1.x);
	printf("%d\n", (r.pt1).x);
	printf("%d\n\n", (rp->pt1).x);	

	struct {
		int len;
		char *str;
	}*p,pn[]={{100,"abcde"},{110,"ABCDEFGHIJ"},{120,"OQPRS"},{130,"!@#$%"}};
	p=pn;//or &pn;
	printf("%d\n", ++p->len);
	printf("%d\n", (++p)->len);
	printf("%d\n\n", (p++)->len);
	p=&pn;
	printf("%#x\n", &*p->str);
	printf("%#x\n", &*p->str++);//*s++//++:->b
	printf("%#x\n", &*p++->str);//++:->ABC...//+6bit
	printf("%#X\n", &*p++->str);//+11bit
	printf("%#X\n", &*p++->str);
	//printf("%x\n", &(*p->str)++);//point.c:30:17: error: lvalue required as unary ‘&’ operand

	//*/
	
	return 0;
}
/*
wuchengbing@ubuntu:~/GitHub/TheCProgrammingLanguage_SecondEdition/6Struct/6.2 Struct and function$ ./a.out 
10
10
10
10

101
110
110

a
a
b
A
Segmentation fault (core dumped)
wuchengbing@ubuntu:~/GitHub/TheCProgrammingLanguage_SecondEdition/6Struct/6.2 Struct and function$ 

*/
