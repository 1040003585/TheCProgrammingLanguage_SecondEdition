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

/*
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 导言/1.6 数组$ gcc 4count_vertical2.c 
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 导言/1.6 数组$ ./a.out 
4 3 653493 7 dfdf 36354387568313540463241
43r334h34 3 33434356178686^[979677669465      
digits = 1 3 1 18 12 6 11 6 4 4, white space = 9, other = 7 
               *                                        
               *                                        
               *                                        
               *                                        
               *                                        
               *                                        
               * *                                      
               * *   *                                  
               * *   *                                  
               * *   *                      *           
               * *   *                      *           
               * *   *                      *          *
               * * * * *                    *          *
               * * * * *                    *          *
               * * * * * * *                *          *
           *   * * * * * * *                *          *
           *   * * * * * * *                *          *
         * * * * * * * * * *                *          *
digits = 0 1 2 3 4 5 6 7 8 9, white space =' ',other = # 
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 导言/1.6 数组$ 

*/
