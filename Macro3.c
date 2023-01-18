#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ADD 1
#define MIN 0

int main(void)
{
	int num1, num2;
	printf("input two integers: ");
	scanf("%d %d", &num1, &num2);

#if ADD														//cf. ifdef ifndef
	printf("%d + %d = %d \n", num1, num2, num1 + num2);     //#elif #else
#endif

#if MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}