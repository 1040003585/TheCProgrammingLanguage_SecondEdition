#include <stdio.h>
#define NUM 2100000000
int main()
{
	//int sum=0;//效果不明显，不如gcc -O 优化编译 
	register int sum=0;
	for(int i=0;i<NUM;i++)
		sum+=i;
	printf("%d\n",sum);
	return 0;
}

/*
wu-being@ubuntu:~/C Code$ gedit register.c
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ ./a.out 
wu-being@ubuntu:~/C Code$ ./a.out 
wu-being@ubuntu:~/C Code$ ls
4.11 C Preprocess  4.5 Head file  a.out  register.c
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ gedit register.c
^C
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ ./a.out 
-2014260032
wu-being@ubuntu:~/C Code$ gedit register.c
^C
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ ./a.out 
887459712
wu-being@ubuntu:~/C Code$ ./a.out 
887459712
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ gedit register.c
^[[A^[[A^C
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ ./a.out 
52872576
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m7.654s
user	0m7.652s
sys	0m0.004s
wu-being@ubuntu:~/C Code$ gedit register.c
wu-being@ubuntu:~/C Code$ gcc register.c 
wu-being@ubuntu:~/C Code$ ./a.out 
52872576
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m6.063s
user	0m6.056s
sys	0m0.004s
wu-being@ubuntu:~/C Code$ gcc -O register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.929s
user	0m0.908s
sys	0m0.004s
wu-being@ubuntu:~/C Code$ gcc -O1 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.900s
user	0m0.892s
sys	0m0.008s
wu-being@ubuntu:~/C Code$ gcc -O2 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.903s
user	0m0.900s
sys	0m0.000s
wu-being@ubuntu:~/C Code$ gcc -O3 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.917s
user	0m0.884s
sys	0m0.032s
wu-being@ubuntu:~/C Code$ gcc -O4 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.919s
user	0m0.916s
sys	0m0.000s
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.918s
user	0m0.916s
sys	0m0.000s
wu-being@ubuntu:~/C Code$ gcc -O5 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.879s
user	0m0.868s
sys	0m0.012s
wu-being@ubuntu:~/C Code$ gcc -O6 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.887s
user	0m0.884s
sys	0m0.000s
wu-being@ubuntu:~/C Code$ gcc -O10 register.c 
wu-being@ubuntu:~/C Code$ time ./a.out 
52872576

real	0m0.871s
user	0m0.864s
sys	0m0.000s
wu-being@ubuntu:~/C Code$ 

*/
