#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char X[100], ch, idx = 0, fl, Y[100], jdx = 0;

	scanf("%c", &ch);
	while (ch != '!') {
		X[idx++] = ch;
		scanf("%c", &ch);
	}
	//
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (X[i] == X[j])
				fl = 0;
		if (fl == 1)
			Y[jdx++] = X[i];
	}
	//
	for (int i = 0; i < jdx; i++)
		printf("%c", Y[jdx - 1 - i]);

	return 0;
}