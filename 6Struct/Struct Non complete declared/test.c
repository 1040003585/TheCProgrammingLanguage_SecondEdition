#include <stdio.h>

int main()
{
	//struct B;//non completed declared
	struct A{struct B *partner;};
	//struct B{struct A *partner;};
	return 0;
}
