# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

double CelToFah(double c)
{
	return 1.8 * c + 32;
}
double FahToCel(double f)
{
	return (f - 32) / 1.8;
}

int main(void)
{
	int sel;
	double num;

	printf("1) Cel to Fah  2) Fah to Cel: ");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("input Cel: ");
		scanf("%lf", &num);
		printf("output Fah: %f \n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("input Fah: ");
		scanf("%lf", &num);
		printf("output Cel: %f \n", FahToCel(num));
	}
	else
		printf("Sel Error \n");

	return 0;
}