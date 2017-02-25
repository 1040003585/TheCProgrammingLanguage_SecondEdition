#include <stdio.h>
int main()
{
	int fahr;

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%%fahr%%: %03d %06.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
