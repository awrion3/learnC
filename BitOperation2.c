#include <stdio.h>

int main(void)
{
	int num = 15;      // 0 0 0 00001111

	int l1 = num << 1; // 0 0 0 00011110
	int l2 = num << 2; // 0 0 0 00111100

	int r1 = num >> 1; // 0 0 0 00000111
	int r2 = num >> 2; // 0 0 0 00000011

	printf("1 left shift: %d \n", l1); // 30
	printf("2 left shift: %d \n", l2); // 60

	printf("1 right shift: %d \n", r1); // 7
	printf("2 right shift: %d \n", r2); // 3

	// negative integer
	int num2 = -16; //  11111111 1 1 11110000 
                    // '11111111 1 1 11111100 (if 11 instead of 00 (in maintained system))      
	printf("2 right shift: %d \n", num2 >> 2); // -4 (0 0 0 00000011 > 0 0 0 00000100)

	return 0;

}