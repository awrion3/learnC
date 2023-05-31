#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char ch, min, smin, fl = 0;
	char rh, rmin, rsmin, pl = 0;

	scanf("%c", &ch);
	while (ch != '!') {

		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {

			rh = ch >= 'a' && ch <= 'z' ? 'A' + 2 * (ch - 'a') + 1 : 'A' + 2 * (ch - 'A'); //char range

			if (fl == 0) {
				rmin = 127; rsmin = 126; //char

				min = ch; smin = ch;
				fl = 1;
			}

			if (rmin > rh) {
				rsmin = rmin;
				rmin = rh;

				smin = min;
				min = ch;
			}
			else if (rmin < rh && rsmin > rh) {
				rsmin = rh;

				smin = ch;
			}
			pl = 1;
		}
		else {
			if (pl == 1) {
				printf("%c%c\n", min, smin);
				pl = 0;
			}
			fl = 0;
		}
		scanf("%c", &ch);
	}
	return 0;
}
//***sAd123Ijfgh789Kup###!
//2468eE#$%gG^13Ttsuv57*()!