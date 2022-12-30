# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	double rad;
	double area;
	printf("radius: ");
	scanf("%lf", &rad);  //double : %lf

	area = rad * rad * 3.1415;
	printf("area of circle: %f \n", area);

	return 0;
}