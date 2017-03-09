#include <stdio.h>

/* month_name函数：返回第n个月份的名字 */
char * month_name(int i){
	static char *name[]={
		"Illegal month", 
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"October", "November", "December",
	};
	return (i<1||i>12)?name[0]:name[i];
}

int main()
{
	int i = 0;
	while( scanf("%d", &i)!=EOF )
		printf("The %d month is: %s\n", i, month_name(i) );
	return 0;
}
