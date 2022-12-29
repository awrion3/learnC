#include <stdio.h>

int main(void)
{
	int num1 = 0xA7, num2 = 0x43; // Hexadecimal
	int num3 = 032, num4 = 024;   // Octal

	printf("0xA7 = %d \n", num1);
	printf("0x43 = %d \n", num2);
	printf("032 = %d \n", num3);
	printf("024 = %d \n", num4);
	
	return 0;
}