#include <stdio.h>

int main(void)
{
	//
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));

	//
	float num = 3.24f + 5.12f;
	printf("float literal: %f \n", num);
	printf("float size: %d", sizeof(num));

	return 0;
}