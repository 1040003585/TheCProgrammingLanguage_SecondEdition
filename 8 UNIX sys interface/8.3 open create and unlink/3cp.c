#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define PERMS 0666	//owner, owner group and other can write and read
//#define BUFSIZ 100	//stdio.h

void error(char *, ...);

int main(int argc, char * argv[])
{
	int f1, f2, n;
	char buf[BUFSIZ];
	
	if(argc != 3){
		error("usage: cp fromfile tofile");
	}
	if((f1=open(argv[1],O_RDONLY,0))==-1){
		error("cp: can't open %s", argv[1]);
	}
	if((f2=creat(argv[2],PERMS))==-1){
		error("cp: can't create %s, mode %03o", argv[2], PERMS);
	}
	while((n=read(f1,buf,BUFSIZ))>0){
		if(write(f2,buf,n)!=n)
			error("cp: write error on file %s", argv[2]);
	}
	return 0;
}
