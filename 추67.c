#pragma warning (disable : 4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, v = 0; //���� ���� �� �ʱ�ȭ

	scanf("%d", &N); //���� N �Է�

	while (N != 0) { //�ݺ� ���� ����
		v *= 10; //�ڸ��� �̵�
		v += N % 10; //�ڸ��� ���� �����
		N /= 10; //�ڸ��� �и�
	}

	printf("%d", v * v); //�ڸ��� ���� ������ ���

	return 0; //���α׷� ���� ����
}