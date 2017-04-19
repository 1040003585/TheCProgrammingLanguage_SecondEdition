#include <stdio.h>
#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
static char *allocp=allocbuf;//下一个空闲位置
//static char *allocp=&allocbuf[0];

char *alloc(int n){	//返回指向n个字符的指针
	if(allocbuf+ALLOCSIZE-allocp>=n){//空间足够
		allocp+=n;
		return allocp-n;
	}else//空间不够
		return 0;
}

void afree(char *p){	//释放p指向的后面存储区
	if(p>=allocbuf && p<allocbuf+ALLOCSIZE){
		allocp=p;
	}
}

int main()
{
	//char a[100];
	//scanf("%s",&a[1]);
	//puts(a);
	char *a=alloc(10);
	return 0;
}
