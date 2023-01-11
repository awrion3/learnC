#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("number of strings: %d \n", argc);

	while (argv[i] != NULL)
	{
		printf("%d string: %s \n", i+1, argv[i]);
		i++;
	}
	return 0;
}