#include <stdio.h>
#include <stdlib.h>

int numcmp(char *s1, char *s2){

	double v1, v2;
	v1=atof(s1);
	v2=atof(s2);
	printf("%f %f \n", v1, v2);
	if(v1<v2)return -1;
	else if(v1>v2)return 1;
	else return 0;
}

int main()
{
	char s1[]="123",s2[]="24a";
	printf("%d\n",numcmp(s1,s2));
	return 0;
}
