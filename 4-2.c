#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int H, M, S;

	scanf("%d", &S);

	H = S / 3600;
	S = S % 3600;
	M = S / 60;
	S = S % 60;

	printf("%d:%d:%d", H, M, S);

	return 0;
}
