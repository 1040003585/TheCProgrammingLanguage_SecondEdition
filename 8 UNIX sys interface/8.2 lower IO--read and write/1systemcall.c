#include <unistd.h>
#define BUFSIZ 100
/*
int n_read = read(int fd, char *buf, int n)//fd=0 stdin
int n_write=write(int fd, char *buf, int n)//fd=1 stdout
> man 2 read
*/
int main(){
	char buf[BUFSIZ];
	int n;
	while((n=read(0, buf, BUFSIZ))>0){
		write(1,buf,n);
	}
	return 0;
}
/*
erface/8.2 lower IO--read and write$ ./a.out 
hello, world!
hello, world!
fjsf
fjsf
sf
sf
e
e
d
d


fsd
fsd
df
df

*/
