# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int AbsCom(int num1, int num2);
int GetAbs(int num);

int main(void)
{
	int num1, num2;
	printf("two integer numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("%d vs %d: %d \n",
		num1, num2, AbsCom(num1, num2));
	return 0;
}

int AbsCom(int num1, int num2)
{
	if (GetAbs(num1) > GetAbs(num2))
		return num1;
	else
		return num2;
}

int GetAbs(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}