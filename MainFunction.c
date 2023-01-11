#include <stdio.h>

int main(int argc, char *argv[])
{ 
	int i = 0;
	printf("number of strings: %d \n", argc);

	for (i = 0; i < argc; i++)
		printf("%d string: %s \n", i+1, argv[i]);

	return 0;
}