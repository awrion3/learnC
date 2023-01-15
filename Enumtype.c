#include <stdio.h>

typedef enum syllable
{
	D=1, R=2, M=3, F=4, S=5, L=6, T=7
} Syllable;

void Sound(Syllable sy)
{
	switch(sy)
	{
		case D:
			puts("do"); return;
		case R:
			puts("re"); return;
		case M:
			puts("mi"); return;
		case F:
			puts("fa"); return;
		case S:
			puts("so"); return;
		case L:
			puts("la"); return;
		case T:
			puts("ti"); return;
	}
	puts("tones");
}

int main(void)
{
	Syllable tone;
	for (tone = D; tone <= T; tone += 1)
		Sound(tone);
	return 0;
}