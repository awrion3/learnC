#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1); // Octal (# is prefered)
	printf("%x %#x \n", num2, num2); // Hexadecimal (# is prefered)

	return 0;
}