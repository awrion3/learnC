#pragma warning(disable:4996)
#include <stdio.h>

//0 ����
int add_digits(int);

int main(void) {

	//1 �Է�
	int N;
	scanf("%d", &N);

	//3 ȣ��
	while (N > 9) {
		N = add_digits(N);
	}
	//4 ���
	printf("%d", add_digits(N));

	return 0;
}

//2 ����
int add_digits(int N) {

	int sum = 0;

	while (N != 0) {
		sum += N % 10;
		N /= 10;
	}

	return sum;
}