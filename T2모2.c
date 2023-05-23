#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char ch, x[100], y[100], idx = 0, jdx = 0, i, j, xfir;

	//1 입력
	scanf("%c", &ch);
	while (ch != '*') {
		x[idx++] = ch;
		scanf("%c", &ch);
	}

	scanf("%c", &ch);
	while (ch != '*') {
		y[jdx++] = ch;
		scanf("%c", &ch);
	}

	//2 비교
	for (int i = 0; i < idx && i < jdx; i++) {
		if (x[i] < y[i]) {
			xfir = 1;
			break;
		}
		else if (x[i] > y[i]) {
			xfir = 0;
			break;
		}
		else {
			xfir = -1;
		}
	}
	//
	if (xfir == -1) {
		if (idx < jdx)
			xfir = 1;
		else
			xfir = 0;
	}

	//3 출력
	if (xfir == 1) {
		for (int i = 0; i < idx; i++)
			printf("%c", x[i]);
	}
	else
		for (int i = 0; i < jdx; i++)
			printf("%c", y[i]);

	return 0;
}
//aaaa*aab*
//abcd*abcaa*