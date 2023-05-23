#pragma warning(disable:4996)
#include <stdio.h>

//
int reverse_num(int);
int is_palindromic(int);
int del_digit(int, int);

int main(void) {

	int N, T;
	scanf("%d%d", &N, &T);

	printf("%d %d %d ", N, reverse_num(N), is_palindromic(N));
	printf("%d", del_digit(N, T));

	return 0;
}

//
int reverse_num(int N) {

	int res = 0;

	while (N != 0) {
		res *= 10;
		res += N % 10;
		N /= 10;
	}
	return res;
}

int is_palindromic(int N) {

	return (N == reverse_num(N));
}

int del_digit(int N, int T) {

	int arr[9], idx = 0, rrr[9];
	int num = N, tdx = T - 1; //인덱스 조정!
	int res = 0;

	while (num != 0) { //배열로 변환
		arr[idx++] = num % 10;
		num /= 10;
	}

	if (is_palindromic(N)) { //회문수인 경우,
		for (int i = 0; i < idx; i++) {
			if (i == tdx) {
				arr[i] = arr[i + 1];
				tdx++;
			}
		}
		idx--;

		for (int i = 0; i < idx; i++)
			rrr[i] = arr[idx - 1 - i]; //뒤집어서도 적용

		tdx = T - 1; //초기화

		for (int i = 0; i < idx; i++) {
			if (i == tdx) {
				rrr[i] = rrr[i + 1];
				tdx++;
			}
		}
		idx--;
	}
	else { //회문수가 아닌 경우,
		for (int i = 0; i < idx; i++) {
			if (i == tdx) {
				arr[i] = arr[i + 1];
				tdx++;
			}
		}
		idx--;

		for (int i = 0; i < idx; i++)
			rrr[i] = arr[idx - 1 - i]; //원래대로 복구
	}

	//배열 수로 재변환
	for (int i = 0; i < idx; i++) {
		res *= 10;
		res += rrr[i];
	}

	return res;
}
//12345 2
//78987 1
//99 1