#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch[20], c, *chp = ch, cdx = 0, rdx = 0;

	scanf("%c", &c);
	while (c != '\n') {
		*(chp + cdx++) = c;
		scanf("%c", &c);
	}

	for (int i = 0; i < cdx; i++)
		if (*(chp + i) == '#') {
			rdx = i - 1;
			break;
		}
	
	for (int i = rdx; i >= 0; i--)
		printf("%c", *(chp + i));

	return 0;
}
//duck#dduckk
//duck#pond