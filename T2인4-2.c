#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char ch, x[100], idx = 0, fl, y[100], jdx = 0;
	int M, f = 0, al, bl, cnt = 1, max = 1, mdx;

	scanf("%c", &ch);
	while (ch != '!') {
		x[idx++] = ch;
		scanf("%c", &ch);
	}

	scanf("%d", &M);

	//(1)
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (x[i] == x[j])
				fl = 0;

		if (fl == 1)
			y[jdx++] = x[i];
	}

	for (int i = 0; i < jdx; i++)
		printf("%c", y[i]);
	printf("\n");
	
	//(2)
	for (int i = 0; i < jdx; i++) {
		if (y[i] >= 'A' && y[i] <= 'Z') {
			M %= 26;
			y[i] = y[i] + M > 'Z' ? 'A' + (y[i] - 'Z' + M - 1) : y[i] + M;
			y[i] += ('a' - 'A');
		}
		else if (y[i] >= 'a' && y[i] <= 'z') {
			M %= 26;
			y[i] = y[i] + M > 'z' ? 'a' + (y[i] - 'z' + M - 1) : y[i] + M;
			y[i] -= ('a' - 'A');
		}
	}

	for (int i = 0; i < jdx; i++)
		printf("%c", y[i]);
	printf("\n");

	//(3)
	for (int i = 0; i < jdx; i++) {
		if (y[i] >= 'A' && y[i] <= 'Z') {
			if (f == 0) {
				al = 1;
				f = 1;
			}
			bl = al;
			al = 1;
		}
		else if (y[i] >= 'a' && y[i] <= 'z') {
			if (f == 0) {
				al = 0;
				f = 1;
			}
			bl = al;
			al = 0;
		}

		if (bl != al) {
			cnt++;
			if (max < cnt) { //< 사용하여 처음 나온 부분배열으로 저장
				max = cnt;
				mdx = i;
			}
		}
		else
			cnt = 1;
	}	

	if (max == 1) //최소 부분배열 길이는 1이나...
		printf("none");
	else {
		for (int i = mdx - max + 1; i <= mdx; i++)
			printf("%c", y[i]);
	}

	return 0;
}
//azabcxyzxyzstp!
//5
//aZaBcXyZxYzStp!
//5