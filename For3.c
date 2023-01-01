# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int start, end;
	int result;

	printf("start, end: ");
	scanf("%d %d", &start, &end);

	for (result = 0; start <= end; start++)
		result += start;

	printf("result: %d \n", result);
	return 0;
}