# include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	while (i < 5)
	{
		while (j < i)     // i : width / j : length
		{
			printf("o ");
			j++;
		}
		j = 0; // reset j

		printf("* \n");
		i++;
	}
	return 0;
}