#include <stdio.h>

void Simple(void)
{
	static int num1 = 0; // static localV - remain
	int num2 = 0;        // localV - new everytime
	num1++, num2++;
	printf("static: %d local: %d \n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++) // function call - repeat 3 times
		Simple();

	return 0;
}