#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char X[100], ch, idx = 0, fl, Y[100], jdx = 0;
	int M, f = 0, bl, al, cnt = 0, max = 0, mdx;

	scanf("%c", &ch);
	while (ch != '!') {
		X[idx++] = ch;
		scanf("%c", &ch);
	}

	scanf("%d", &M);

	//1
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
		printf("%c", Y[i]);
	printf("\n");

	//NEW 2
	for (int i = 0; i < jdx; i++) {
		if (Y[i] >= 'A' && Y[i] <= 'Z') {
			M %= 26;			//over하면 A로 넘어가되, +M -Z -1 
			Y[i] = Y[i] + M > 'Z' ? 'A' + (Y[i] - 'Z' + M - 1) : Y[i] + M;
			Y[i] += ('a' - 'A');
		}
		else if (Y[i] >= 'a' && Y[i] <= 'z') {
			M %= 26;
			Y[i] = Y[i] + M > 'z' ? 'a' + (Y[i] - 'z' + M - 1) : Y[i] + M;
			Y[i] -= ('a' - 'A');
		}
	}

	for (int i = 0; i < jdx; i++)
		printf("%c", Y[i]);
	printf("\n");

	//NEW 3
	for (int i = 0; i < jdx; i++) {
		if (Y[i] >= 'A' && Y[i] <= 'Z') {
			//
			if (f == 0) {
				al = 1;
				f = 1;
			}
			//
			bl = al;
			al = 1;
		}
		else if (Y[i] >= 'a' && Y[i] <= 'z') {
			//
			if (f == 0) {
				al = 0;
				f = 1;
			}
			//
			bl = al;
			al = 0;
		}
		///
		if (bl != al) {
			cnt++;
			if (max < cnt) {
				max = cnt;
				mdx = i;
			}
		}
		else
			cnt = 0;
	}

	//NEW 4
	if (max == 0)
		printf("none");
	else {
		for (int i = mdx - max; i <= mdx; i++) ///
			printf("%c", Y[i]);
	}

	return 0;
}
//azabcxyzxyzstp!
//5
//aZaBcXyZxYzStp!
//5