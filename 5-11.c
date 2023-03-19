#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int D, E, F, d, e, f;
	int S, B = 0;

	scanf("%d%d%d", &D, &E, &F);
	scanf("%d%d%d", &d, &e, &f);

	S = (D == d) + (E == e) + (F == f);
	
	if (d == E || d == F)
		B += 1;
	if (e == D || e == F)
		B += 1;
	if (f == D || f == E)
		B += 1;

	printf("%dS%dB\n", S, B);

	return 0;
}