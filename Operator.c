#include <stdio.h>
int main(void)
{
	int num1 = 9, num2 = 2;
	
	printf("%d + %d = %d \n", num1, num2, num1+num2); //add
	printf("%d - %d = %d \n", num1, num2, num1-num2); //subtract
	printf("%d x %d = %d \n", num1, num2, num1*num2); //multiple
	printf("%d / %d = %d \n", num1, num2, num1/num2); //divide
	printf("%d %% %d = %d \n", num1, num2, num1%num2); //remainder
	
	int num3 = 2, num4 = 4, num5 = 6;
	num3 += 3;						//ex. num3 += num4 (cf. num3 = +num4)
	num4 *= 4;						//assignment operator
	num5 %= 5;
	printf("Result: %d, %d, %d \n", num3, num4, num5);

	return 0;
}