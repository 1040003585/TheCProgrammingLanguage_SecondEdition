

// get : read n byte from pos 
int get(int fd, long pos, char *buf, int n){
	if(lseek(fd, pos, 0)>=0)
		return read(fd,buf,n);
	else 
		return -1;
	
}
