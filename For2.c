# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for ( ; input>=0.0; )  // for(num = 0; input>=0.0; num++) 
	{
		total += input;
		printf("minus to quit: ");
		scanf("%lf", &input);
		num++;
	}
	printf("avg: %f \n", total / (num - 1));

	return 0;
}