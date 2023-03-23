#pragma warning (disable:4996)
#include<stdio.h>

int main(void)
{
	int a, b, c, A, B, C;
	int st = 0, bl = 0;

	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &A, &B, &C);

	if (a == A)
		st += 1;
	else
		if (a == B)
			bl += 1;
		if (a == C)
			bl += 1;

	if (b == B)
		st += 1;
	else
		if (b == A)
			bl += 1;
		if (b == C)
			bl += 1;

	if (c == C)
		st += 1;
	else
		if (c == A)
			bl += 1;
		if (c == B)
			bl += 1;

	printf("%dS%dB", st, bl);

	return 0;
}