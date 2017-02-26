#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, nc, nl, nw, state;
	
	state = OUT;
	nc = nl = nw = 0;
	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n') nl++;
		if(c == ' ' || c == '\n' || c == '\t')state = OUT;
		else if(state == OUT ){
			state = IN;
			++nw;
		}
	}
	printf("Number: char: %d line: %d word: %d \n", nc, nl, nw);

	return 0;
}
