#include <stdio.h>

int main()
{
	int c = getchar();

	while(c != EOF){//Ctrl+D
		putchar(c);
		c = getchar();
	}

	return 0;
}
/*
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 ��
�言/1.5 字符输入输出/1.5.1 文件复制$ ./a.out 
sdfsdf34rfd
sdfsdf34rfd
fdsf sdf 	jlls
fdsf sdf 	jlls


sfdfe
sfdfe
wu_being@ubuntukylin64:~/GitHub/TheCProgrammingLanguage_SecondEdition/1第1章 ��
�言/1.5 字符输入输出/1.5.1 文件复制$ 
*/
