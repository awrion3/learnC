#pragma warning(disable:4996)
#include <stdio.h>

//0 ����
int reverse_num(int);
int is_palindromic(int);
int del_digit(int, int);

int main(void) {

	int N, T;
	scanf("%d%d", &N, &T);

	//2 ȣ��
	printf("%d %d %d ", N, reverse_num(N), is_palindromic(N));
	printf("%d", del_digit(N, T));

	return 0;
}

//1 ����
int reverse_num(int N) {

	int rev = 0;

	while (N != 0) {
		rev *= 10;
		rev += N % 10;
		N /= 10;
	}
	return rev;
}

int is_palindromic(int N) {

	if (N == reverse_num(N))
		return 1;
	return 0;
}

int del_digit(int N, int T) {

	int num = N, arr[9], idx = 0;
	int tx = --T, orr[9], res = 0;
	//tx: �������� �־��� �ε��� ���� ����!!//

	while (num != 0) {
		arr[idx++] = num % 10;
		num /= 10;
	}

	if (is_palindromic(N)) {

		for (int i = 0; i < idx; i++) { //���� �迭�� ���Ͽ�
			if (i == tx) { 
				arr[i] = arr[i + 1];
				tx++;
			}
		}
		idx--; //�ڸ���
		
		for (int i = 0; i < idx; i++)
			orr[i] = arr[idx - 1 - i];	//���� �迭�� ���ϱ�

		tx = T; //�ʱ�ȭ//

		for (int i = 0; i < idx; i++) { //���� �迭�� ���Ͽ�
			if (i == tx) {
				orr[i] = orr[i + 1];
				tx++;
			}
		}
		idx--; //�ڸ���

		for (int i = 0; i < idx; i++) {
			res *= 10;
			res += orr[i];	//���� �ε��� �ݿ��� �� �迭 orr�� ���ϱ�
		}
	}
	else {

		for (int i = 0; i < idx; i++) { //���� �迭�� ���Ͽ�
			if (i == tx) {
				arr[i] = arr[i + 1];
				tx++;
			}
		}
		idx--; //�ڸ���

		for (int i = 0; i < idx; i++) {
			res *= 10;
			res += arr[idx - 1 - i]; //���� �ε��� �ݿ��� �� �迭 arr�� ���ϱ�
		}		  //i: �ٽ� ��ĥ �� ���� ������ ����!!//
	}

	return res;
}