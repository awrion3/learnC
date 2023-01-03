# include <stdio.h>

int NumberCompare(int, int);

int main(void)
{
	printf("3 vs 4: %d \n", NumberCompare(3, 4));
	return 0;
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}