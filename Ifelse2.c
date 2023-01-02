# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num, abs;
	printf("number: ");
	scanf("%d", &num);

	abs = num>0 ? num : num*(-1); // num>0 ? true : false
	printf("abs: %d \n", abs);

	return 0;
}