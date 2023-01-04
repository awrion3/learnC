# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	char voca[100];
	int len = 0, i;
	char max = 0;

	printf("input voca: ");
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		if (max < voca[i])
			max = voca[i];

	printf("max ASCII char: %c \n", max);

	return 0;
}