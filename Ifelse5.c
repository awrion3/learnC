# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	double avr;
	
	printf("your scores: ");
	scanf("%d %d %d", &kor, &eng, &mat);
	
	avr = (kor + eng + mat) / 3.0;
	printf("average: %f \n", avr);

	if (avr >= 90.0)
		printf("A! \n");
	else if (avr >= 80.0)
		printf("B! \n");
	else if (avr >= 70.0)
		printf("C! \n");
	else if (avr >= 50.0)
		printf("D! \n");
	else
		printf("F! \n");

	return 0;

}