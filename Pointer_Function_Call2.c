# include <stdio.h>

int SquareV(int num)
{
	return num * num;
}

void SquareR(int* ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

int main(void)
{
	int num = 10;

	printf("%d \n", SquareV(num));
	
	SquareR(&num);
	printf("%d \n", num);

	return 0;
}