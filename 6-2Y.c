#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	char ch = 'a';

	while (ch <= 'z')
		printf("%c", ch++);

	return 0;
}