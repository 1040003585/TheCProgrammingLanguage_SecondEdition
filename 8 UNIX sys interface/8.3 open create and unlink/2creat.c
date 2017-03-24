#include <fcntl.h>
/*
O_RDONLY
O_WRONLY
O_RDWR
*/
int main(){

	//int creat(char * name, int perms);
	int fd=creat("2.txt", 0);

	return 0;
}
