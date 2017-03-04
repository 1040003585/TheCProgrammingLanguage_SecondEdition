#include <stdio.h>

/* 将字符串s转换为相应的整数 */
int atoi(char s[]){
	int n=0;
	for(int i=0;s[i]>='0'&&s[i]<='9';i++){
		n=10*n+(s[i]-'0');
	}
	return n;
}

int lower(int c){
	if(c>='A'&&c<='Z')return c+'a'-'A';
	return c;
}

int main()
{	
	printf("%d\n", atoi("123"));	
	return 0;
}
