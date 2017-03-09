#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getline(char *line, int max);

/* find函数：打印与第一个参数指定的模式匹配的所有输入行 */ 
int main(int argc, char *argv[])
{
	char line[MAXLINE];
	long lineno=0;
	int c, except=0, number=0, found=0;
	while(--argc>0 && (*++argv)[0]=='-'){
		while(c=*++argv[0]){
			switch (c){
				case 'x': except=1;break;//打印与pattern不匹配的行 
				case 'n': number=1;break;//打印行号 
				default : printf("find: illegal option %c\n", c);
						argc=0;	found=-1; break;
			}
		}
	}
	//printf("argc: %d \n",argc);
	if(argc != 1){
		puts("Usage: 5find-x-npattern -x -n pattern");
	}else{//argc==1
		//printf("except: %d, number: %d\n",except, number);
		while(getline(line, MAXLINE) >0 ){
			lineno++;
			if((strstr(line, *argv) != NULL) != except){//except
				if(number)printf("%ld: ",lineno);//lineno
				printf("%s", line);
				found++;
			}
		}
	}
	return found;
}

int getline(char s[], int lim){
	int c, i=0;
	while(--lim>0 && (c=getchar())!=EOF && c!='\n')s[i++]=c;
	if(c=='\n')s[i++]=c;
	s[i]='\0';
	return i;
}

