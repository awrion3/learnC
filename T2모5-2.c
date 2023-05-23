#pragma warning(disable:4996)
#include <stdio.h>

int del_dupnum(int);

int main(void) {

	int N;
	
	scanf("%d", &N);

	printf("%d", del_dupnum(N));

	return 0;
}

int del_dupnum(int N) {

	int arr[9], idx = 0, orr[9];
	int rrr[9], jdx = 0, fl, res = 0;

	while (N != 0) {
		arr[idx++] = N % 10;
		N /= 10;
	}

	//
	for (int i = 0; i < idx; i++) {
		orr[i] = arr[idx - 1 - i];
	}
	
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (orr[i] == orr[j])
				fl = 0;

		if (fl == 1)
			rrr[jdx++] = orr[i];
	}
		
	//
	for (int i = 0; i < jdx; i++) {
		res *= 10;
		res += rrr[i];
	}

	return res;
}
//23303843
//891571219