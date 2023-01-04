# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	char voca[100];
	int len = 0;

	printf("input voca: ");
	scanf("%s", voca);

	while (voca[len] != 0) // exception: null
		len++;

	printf("length of voca is %d \n", len);

	return 0;
}