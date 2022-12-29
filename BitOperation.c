#include <stdio.h>

int main(void)
{
	int num1 = 15;				       // 0 0 0 00001111
	int num2 = 20;					   // 0 0 0 00010100
	int num3 = num1 & num2;			   // 0 0 0 00000100 =
	printf("AND result: %d \n", num3); //       4
	
	int num4 = num1 | num2;			   // 0 0 0 00011111 =
	printf("OR result: %d \n", num4);  //       31

	int num5 = num1 ^ num2;			   // 0 0 0 00011011 =
	printf("XOR result: %d \n", num5); //       27

	int num6 = ~num1;		           // 1 1 1 11110000 =
	printf("NOT result: %d \n", num6); //       -16        0 0 0 00010000 +16 

	return 0;

}