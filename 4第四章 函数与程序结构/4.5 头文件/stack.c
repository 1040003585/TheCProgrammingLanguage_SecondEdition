#include <stdio.h>
//#include "calc.h"
#define MAXVAL 100

//static: only used in this file
static int sp=0;
static double val[MAXVAL];

//extern: can used in other file
extern char stack[]="stack file";
extern void push(double f){
	if(sp<MAXVAL)val[sp++]=f;
	else printf("error: stack full, can't push %g",f);
}

extern double pop(void){
	if(sp>0)return val[--sp];
	else puts("error: stack empty");
}
