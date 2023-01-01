# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int total = 0;
	int i, num;
	
	printf("number: ");
	scanf("%d", &num);

	for (i = 0; i < num + 1; i++) // for (int i=0; i<num+1; i++)
		total += i;

	printf("0 ~ %d : %d \n", num, total);

	return 0;
}