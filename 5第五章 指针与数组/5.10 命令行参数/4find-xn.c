#include <stdio.h>

/* ���� find -x -n patternstring �� find -xn patternstring
	argc: ��ʾ��û�д���Ĳ�����Ŀ 
	argv: ָ����Щδ��������еĵ�һ������ 
*/ 
int main(int argc, char *argv[])
{
	int c, except=0, number=0, found=0;
	while(--argc>0 && (*++argv)[0]=='-'){//�ڸ������������ 
		while(c=*++argv[0]){//����һ���ض�������"-xn\0"���ַ� 
			switch (c){
				case 'x': except=1;break;
				case 'n': number=1;break;
				default : printf("find: illegal option %c\n", c);
						argc=0;	found=-1; break;
			}
		}
	}
	printf("argc: %d \n",argc);
	if(argc != 1){//0
		puts("Usage: 4find-xn -x -n pattern");
	}else{//argc==1: pattern
		printf("except: %d, number: %d\n",except, number);
	}
	return 0;
}
