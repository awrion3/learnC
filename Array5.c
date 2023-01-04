# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	char str[50];
	int idx = 0;

	printf("input str: ");
	scanf("%s", str);
	printf("print string: %s \n", str); // no & in front of str array

	printf("print char: ");
	while(str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}