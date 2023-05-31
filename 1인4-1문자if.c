#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char ch, MX = 'A', MN = 'Z', mx = 'a', mn = 'z', max, min;

	scanf("%c", &ch);
	while (ch != '!') {
		if (ch >= 'A' && ch <= 'Z') {
			if (MX < ch)
				MX = ch;
			if (MN > ch)
				MN = ch;
		}
		else if (ch >= 'a' && ch <= 'z') {
			if (mx < ch)
				mx = ch;
			if (mn > ch)
				mn = ch;
		}
		scanf("%c", &ch);
	}

	if (MX + ('a' - 'A') <= mx) {
		max = mx;
	}
	else
		max = MX;

	if (MN + ('a' - 'A') > mn) {
		min = mn;
	}
	else
		min = MN;

	printf("%c\n%c", min, max);

	return 0;
}
//***Asd123FghIj789K###!
//2468eE#$%gG^13Tt57*()!