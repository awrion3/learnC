#pragma warning (disable:4996) //scanf()�� ���� warning ����
#include <stdio.h>

int main(void) {

	int N, v = 0; //���� ����

	scanf("%d", &N); //���� N �Է�

	while (N != 0) { //N�� 0�� �ƴ� ����
		v *= 10; //�ڸ��� �̵�

		v += N % 10; //�� �ڸ��� ��� ���� ��
		
		N /= 10; //N�� �� �ڸ��� �ٿ�������
	}
	printf("%d", v); //�ڸ��� ���� ���

	return 0; //���α׷� ���� ����
}