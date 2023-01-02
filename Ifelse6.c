# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;
	printf("numbers: ");
	scanf("%d %d", &num1, &num2);

	result = (num1 < num2) ? num2 - num1 : num1 - num2; //Conditional operator
	printf("result: %d \n", result);

	return 0;

}