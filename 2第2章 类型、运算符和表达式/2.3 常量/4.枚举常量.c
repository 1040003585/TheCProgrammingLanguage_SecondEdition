#include <stdio.h>

int main()
{
	enum boolen{NO, YES}bb;
	enum boolen b=YES;
	enum boolen b2='A';b2++;
	printf("%d\n",b2);
	printf("%d\n",b);
	b2=(enum boolen)('a');
	printf("b2:%d\n",b2);
	printf("%d\n",bb);
	printf("%d\n",NO);

	enum escapes{BELL='\a', TAB='\t', NEWLINE='\n'};
	enum months{JAN=1,FEB,MAR,};
	
	return 0;
}
