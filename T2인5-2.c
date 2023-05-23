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
	int num = N, tdx = T - 1; //�ε��� ����!
	int res = 0;

	while (num != 0) { //�迭�� ��ȯ
		arr[idx++] = num % 10;
		num /= 10;
	}

	if (is_palindromic(N)) { //ȸ������ ���,
		for (int i = 0; i < idx; i++) {
			if (i == tdx) {
				arr[i] = arr[i + 1];
				tdx++;
			}
		}
		idx--;

		for (int i = 0; i < idx; i++)
			rrr[i] = arr[idx - 1 - i]; //������� ����

		tdx = T - 1; //�ʱ�ȭ

		for (int i = 0; i < idx; i++) {
			if (i == tdx) {
				rrr[i] = rrr[i + 1];
				tdx++;
			}
		}
		idx--;
	}
	else { //ȸ������ �ƴ� ���,
		for (int i = 0; i < idx; i++) {
			if (i == tdx) {
				arr[i] = arr[i + 1];
				tdx++;
			}
		}
		idx--;

		for (int i = 0; i < idx; i++)
			rrr[i] = arr[idx - 1 - i]; //������� ����
	}

	//�迭 ���� �纯ȯ
	for (int i = 0; i < idx; i++) {
		res *= 10;
		res += rrr[i];
	}

	return res;
}
//12345 2
//78987 1
//99 1