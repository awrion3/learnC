#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	char c;
	int x;

	scanf("%c%d", &c, &x);

	for (int i = 1; i <= x; i++)
		printf(" %c", c);

	return 0;
}