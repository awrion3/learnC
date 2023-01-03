# include <stdio.h>

int SimpleF1(void)
{
	int num = 10; // SimpleF1's local variable num
	num++;
	printf("num: %d \n", num);
	return 0; //
}

int SimpleF2(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);

	return 0;
}

int main(void)
{
	int num = 17; // main's local variable num
	SimpleF1();
	SimpleF2();
	printf("main num: %d \n", num);

	return 0; //
}