#pragma warning(disable:4996)
#include <stdio.h>

int reverse_num(int);
int del_dupnum(int);

int main(void) {

	int N, M, gap, max = 0, mnum;

	scanf("%d", &N);

	while (N >= 0) {

		M = del_dupnum(reverse_num(N));
		printf(" %d", M);

		gap = N - M > 0 ? N - M : -(N - M);

		if (max < gap) {
			max = gap;
			mnum = N;
		}

		scanf("%d", &N);
	}
	
	printf("\n%d %d", mnum, max);

	return 0;
}

int reverse_num(int N) {
	
	int arr[9], idx = 0, res = 0;

	while (N != 0) {
		arr[idx++] = N % 10;
		N /= 10;
	}

	for (int i = 0; i < idx; i++) {
		res *= 10;
		res += arr[i];
	}

	return res;
}

int del_dupnum(int N) {

	int arr[9], idx = 0, orr[9];
	int rrr[9], jdx = 0, fl, res = 0;

	//한번더 뒤집기 필요
	while (N != 0) {
		arr[idx++] = N % 10;
		N /= 10;
	}

	for (int i = 0; i < idx; i++) {
		orr[i] = arr[idx - 1 - i];
	}

	//
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (orr[i] == orr[j])
				fl = 0;

		if (fl == 1)
			rrr[jdx++] = orr[i];
	}

	//
	for (int i = 0; i < jdx; i++) { //인덱스 0부터이므로, 뒤집을 필요 없음
		res *= 10;
		res += rrr[i];
	}

	return res;
}
//34830332 912175 1983 101224 1357 -5
//12345 54231 -9