#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);

    if (x % 3 == 0 && x % 5 == 0) 
        printf("%d is multiple of 15.\n", x);
    else if (x % 3 == 0)
        printf("%d is multiple of 3.\n", x);
    else if (x % 5 == 0)
        printf("%d is multiple of 5.\n", x);
	else
		printf("%d", x);

	return 0;
}