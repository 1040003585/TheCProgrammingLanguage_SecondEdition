#include <stdio.h>

/* 统计各个数字、空白符和其他字符出现的次数，用水平直方图表示 */
int main()
{
	int c, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for(int i=0;i<10;i++)ndigit[i]=0;

	while((c=getchar()) != EOF){
		if(c >= '0' && c <= '9')ndigit[c-'0']++;
		else if(c==' ' || c=='\n' || c=='\t')++nwhite;
		else nother++;
	}

	printf("digits =");
	for(int i=0;i<10;i++)printf(" %d",ndigit[i]);
	printf(", white space = %d, other = %d \n",nwhite, nother);

	//.........................................................
	for(int i=0;i<10;i++){
		printf("'%c': ",i+'0');
		for(int j=0;j<ndigit[i];j++){
			printf("*");
		}
		printf(" %d\n",ndigit[i]);
	}

	printf("'w': ");
	for(int j=0;j<nwhite;j++){
		printf("*");
	}
	printf(" %d\n",nwhite);

	printf("'o': ");
	for(int j=0;j<nother;j++){
		printf("*");
	}
	printf(" %d\n",nother);

	return 0;
}
