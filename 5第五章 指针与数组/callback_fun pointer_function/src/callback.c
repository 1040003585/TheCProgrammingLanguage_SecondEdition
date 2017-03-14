#include "callback.h"

char process(int score, char(*p)(int)){
	char result=p(score);
	return result;
}
