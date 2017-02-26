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

/*
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 导言/1.6 数组$ gcc 2count_horizontal.c 
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 导言/1.6 数组$ ./a.out 
346jdhfd 34 3 43]434
34348346 d37648973 346463764234017503
digits = 2 1 1 14 13 1 6 4 2 1, white space = 7, other = 7 
'0': ** 2
'1': * 1
'2': * 1
'3': ************** 14
'4': ************* 13
'5': * 1
'6': ****** 6
'7': **** 4
'8': ** 2
'9': * 1
'w': ******* 7
'o': ******* 7
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 导言/1.6 数组$ 

*/
