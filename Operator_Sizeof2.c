# include <stdio.h>

int main(void)
{
	char num1 = 1, num2 = 2, res1 = 0;      //char 1 byte
	short num3 = 300, num4 = 400, res2 = 0; //short 2 byte

	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));

	res1 = num1 + num2; //char
	res2 = num3 + num4; //short
	printf("size of res1 & res2: %d, %d \n", sizeof(res1), sizeof(res2));

	printf("size of char add: %d \n", sizeof(num1+num2));  // changed into int (4 byte)
	printf("size of short add: %d \n", sizeof(num3+num4)); // changed into int 

	return 0;
}