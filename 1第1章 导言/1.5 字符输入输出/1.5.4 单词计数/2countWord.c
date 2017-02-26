#include <stdio.h>
#include <string.h>

int main()
{
	int word=0;
	char s[1000];

	gets(s);
	puts(s);
	if(strlen(s)==0)puts("empty line");

	for(int i = 0; s[i+1] != '\n'; i++)
		if((s[i]!=' '&&s[i]!='\n'&&s[i]!='\t')&&
		(s[i+1]==' '||s[i+1]=='\n'||s[i+1]=='\t'))
			word++;

	printf("%d\n",word);

	return 0;
}
/*

wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 ��
�言/1.5 字符输入输出/1.5.4 单词计数$ gcc 2countWord.c 
2countWord.c: In function ‘main’:
2countWord.c:9:2: warning: implicit declaration of function ‘gets’ [-Wimplicit-function-declaration]
  gets(s);
  ^
/tmp/ccvGpEXC.o：在函数‘main’中：
2countWord.c:(.text+0x2b): 警告： the `gets' function is dangerous and should not be used.
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 ��
�言/1.5 字符输入输出/1.5.4 单词计数$ ./a.out 
fsfs f df
fsfs f df
段错误 (核心已转储)

*/
