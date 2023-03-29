#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i, j, x = 1; //x = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			printf("   ");
		for (j = 0; j < n - i; j++)
		{
			printf("%3d", x); //++x;
			x++;
		}
		printf("\n");
	}

	return 0;
}