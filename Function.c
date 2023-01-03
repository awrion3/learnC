# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int Add(int num1, int num2) 
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("Add result: %d \n", num);
}

int ReadInputNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("input two integer numbers: ");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();

	num1 = ReadInputNum();
	num2 = ReadInputNum();

	result = Add(num1, num2);
	ShowAddResult(result);
	
	return 0;
}