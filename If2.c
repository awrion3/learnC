# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int cal;
	double num1, num2;
	double result;

	printf("cal 1+  2-  3*  4/ \n");
	scanf("%d", &cal);
	printf("numbers: ");
	scanf("%lf %lf", &num1, &num2);

	if (cal == 1)
		result = num1 + num2;
	else if (cal == 2)
		result = num1 - num2;
	else if (cal == 3)
		result = num1 * num2;
	else 
		result = num1 / num2;

	printf("result: %f \n", result);

	return 0;
}