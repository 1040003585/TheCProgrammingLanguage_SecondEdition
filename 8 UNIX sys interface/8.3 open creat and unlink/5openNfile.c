#include <fcntl.h>
#include <stdio.h>

/*
O_RDONLY
O_WRONLY
O_RDWR
*/

char file[100];

char * cat(char * f, int i){
	int j=0;
	while(f++)j++;
	f[j++]=i;
	f[j]='\0';
	return f;
}

int main(){

	//int open(char * name, int flags, int perms);
	//int fd = open(name, flags, perms);

	for(int i=0;i<10;i++)
	//	int fd=open("1.txt", O_RDONLY, 0);//5openNfile.c:13:3: error: expected expression before ‘int’

	{	//int fd=open("1.txt", O_RDONLY, 0);
		int fd=open("files/2.txt", 0);
		//printf("%d\n", fd);
	}

	int fd2=open("files/3.txt",O_RDONLY, 0);
	int fd3=open("files/4.txt",O_RDONLY, 0);
	int fd4=open("files/5.txt",O_RDONLY, 0);
	int fd5=open("files/6.txt",O_RDONLY, 0);
	int fd6=open("files/7.txt",O_RDONLY, 0);
	int fd7=open("files/8.txt",O_RDONLY, 0);
	int fd8=open("files/9.txt", O_RDONLY,0);
	int fd9=open("files/10.txt", O_RDONLY,0);
	int fd10=open("files/11.txt",O_RDONLY, 0);
	int fd11=open("files/22.txt",O_RDONLY, 0);
	int fd12=open("files/23.txt", O_RDONLY,0);
	int fd13=open("files/24.txt", O_RDONLY,0);
	int fd14=open("files/25.txt", O_RDONLY,0);
	int fd15=open("files/26.txt", O_RDONLY,0);
	int fd16=open("files/27.txt", O_RDONLY,0);
	int fd17=open("files/28.txt", O_RDONLY,0);
	int fd18=open("files/29.txt", O_RDONLY,0);
	int fd19=open("files/20.txt", O_RDONLY,0);
	int fd20=open("files/10.txt", O_RDONLY,0);
	int fd21=open("files/32.txt", O_RDONLY,0);
	int fd22=open("files/42.txt", O_RDONLY,0);
	int fd23=open("files/52.txt", O_RDONLY,0);
	int fd24=open("files/62.txt", O_RDONLY,0);
	int fd25=open("files/72.txt", O_RDONLY,0);

	return 0;
}
