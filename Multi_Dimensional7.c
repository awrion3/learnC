#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int record[5][5];

void rWst(void)
{
	int sum;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d student score \n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("subject %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

void rWsb(void)
{
	int sum = 0;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += record[j][i];
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void rS(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%3d ", record[i][j]);
		printf("\n");
	}
}

int main(void)
{
	rWst();
	rWsb();
	rS();

	return 0;
}