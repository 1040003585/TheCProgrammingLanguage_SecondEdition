#include <stdio.h>

#define max(A,B) ((A)>(B)?(A):(B))
#undef max	//取消max 宏的定义 
int max(int a,int b){
	return a>b?a:b;
}

#define dprint(expr) printf(#expr " = %g\n",expr);
#define tempfile(dir) #dir "/%s"

#define paste(front,back) front ## back
#define cat(x,y) x ## y
#define xcat(x,y) cat(x,y) 
#define cat3(a,b,c) a ## b ## c

//#error a0
#pragma sign1
//#line pii "filename"
#

int main()
{	
	printf("%d\n\n",max(1,2));
	
	//字符串替代 
	dprint(3.0/2);//printf("%3.0" " = %g\n",expr);//printf("%3.0 = %g\n",expr);
	printf(tempfile(/usr/tmp) "\N\n\n", "NO.TXT");
	 
	//define 字符串拼接 
	char paste(name,1)[]="Wu_Being";
	puts(name1); 
	//cat(cat(1,2),3);//cat(1,2)3
	int paste(age,1)=xcat(xcat(1,2),3);//123
	printf("age: %d\n", age1);
	printf("cat3(a,b,c): %d\n\n", cat3(1,2,3));

	//系统宏定义 
	printf("%d\n",__LINE__);puts("");
	printf("%d\n",__STDC__);puts("");
	printf(__DATE__);puts("");
	printf(__TIME__);puts("");
	printf(__FILE__);puts("");
	
	return 0;
}
