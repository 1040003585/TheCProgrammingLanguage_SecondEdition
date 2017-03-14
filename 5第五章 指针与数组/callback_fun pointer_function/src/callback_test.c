#include <stdio.h>	
#include "callback.h"

char get_grade(int n){
	if(n>90)return 'A';
	else if(n>80)return 'B';
	else if(n>70)return 'C';
	else if(n>60)return 'D';
	else return 'N';
}
//gcc src/callback_test.c src/callback.c -o bin/callback_test -Iinclude

int main()
{
	int score;
	printf("please input your score: ");
	scanf("%d", &score);
	printf("result: %c\n", process(score, get_grade));//callback.c
	printf("result: %c\n", get_grade(score));//
	return 0;
}
