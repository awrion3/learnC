#include <stdio.h>

int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234); // e format

	printf("%f \n", 0.12345678);
	printf("%E \n", 0.12345678); // E format

	double d1 = 1.23e-3;  // 0.00123
	double d2 = 1.23e-4;  // 0.000123
	double d3 = 1.23e-5;  // 0.0000123
	double d4 = 1.23e-6;  // 0.00000123

	// %g : chooses between %f and %e format (over 6 digits after decimal point > %e)

	printf("%g \n", d1); // %f 
	printf("%g \n", d2); // %f
	printf("%g \n", d3); // %e
	printf("%G \n", d4); // %E

	return 0;
}