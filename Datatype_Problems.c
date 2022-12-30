#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//01
	int x1, y1;
	int x2, y2;
	printf("integer input x1, y1: ");
	scanf("%d %d", &x1, &y1);
	printf("integer input X2, Y2: ");
	scanf("%d %d", &x2, &y2);

	int area;
	area = (x2 - x1) * (y2 - y1);
	printf("area: %d \n", area);

	
	//02
	double A, B;
	printf("double input A, B: ");
	scanf("%lf %lf", &A, &B);
	
	double r1, r2;
	r1 = A + B;
	r2 = A * B;

	printf("Add: %lf \n", r1);
	printf("Multiple: %lf \n", r2);
	
	return 0;

}