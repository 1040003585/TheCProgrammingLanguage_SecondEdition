#include <stdio.h>

/* 统计各个数字、空白符和其他字符出现的次数，用垂直直方图表示 */
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

	printf("digits =");/**/
	for(int i=0;i<10;i++)printf(" %d",ndigit[i]);
	printf(", white space = %d, other = %d \n",nwhite, nother);

	//.........................................................
	int height = 0;
	for(int i=0;i<10;i++)if(height<ndigit[i])height=ndigit[i];
	if(height<nwhite)height=nwhite;
	if(height<nother)height=nother;

	for(int i=0;i<10;i++)ndigit[i]=height-ndigit[i];//
	nwhite=height-nwhite;//
	nother=height-nother;//

	for(int i=0;i<height;i++){
		printf("        ");
		for(int j=0;j<10;j++){
			if(ndigit[j]>0){printf("  ");ndigit[j]--;}
			else printf(" *");//
		}
		if(nwhite>0){printf("                 ");nwhite--;}
		else printf("                *");
		if(nother>0){printf("           ");nother--;}
		else printf("          *");
		puts("");
	}
	printf("digits =");/**/
	for(int i=0;i<10;i++)printf(" %d",i);
	printf(", white space =' ',other = # \n");

	return 0;
}
