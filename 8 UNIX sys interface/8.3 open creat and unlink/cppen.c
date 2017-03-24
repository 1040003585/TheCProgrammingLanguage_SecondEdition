#include <fcntl.h>
/*
O_RDONLY
O_WRONLY
O_RDWR
*/
int main(){

	//int open(char * name, int flags, int perms);
	//int fd = open(name, flags, perms);
	int fd=open("1.txt", O_RDONLY, 0);

	return 0;
}
