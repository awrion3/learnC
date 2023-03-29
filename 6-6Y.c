#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {
	char c = 'a';

	do {
		printf("%c", c++);
	} while (c <= 'z');

	return 0;
}