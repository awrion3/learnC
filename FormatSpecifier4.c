#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//integer type
	int num1, num2, num3;

	printf("three numbers: ");
	scanf("%d %o %x", &num1, &num2, &num3); // format 10 / 8 / 16
	
	printf("three numbers: %d %d %d \n", num1, num2, num3);

	//float type
	
	float num4;
	double num5;
	long double num6;

	printf("three numbers: "); // can use e format
	scanf("%f %lf %Lf", &num4, &num5, &num6); // only in scanf: %lf

	printf("three numbers: %f %f %Lf \n", num4, num5, num6);

	return 0;
}