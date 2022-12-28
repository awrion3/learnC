#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) 
{
	int result1;
	int num1, num2;

	printf("Integer Num1: ");
	scanf("%d", &num1);
	printf("Integer Num2: ");
	scanf("%d", &num2);

	result1 = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result1);


	int result2;
	int num3, num4, num5;

	printf("3 Integer Numbers: ");
	scanf("%d %d %d", &num3, &num4, &num5);
	
	result2 = num3 + num4 + num5;
	printf("%d + %d + %d = %d\n", num3, num4, num5, result2);

	return 0;
}