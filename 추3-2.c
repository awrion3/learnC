#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, i, sum = 0, val = 0; //���� ���� �� �ʱ�ȭ

	scanf("%d", &N); //���� �� �Է�

	for (i = 1; i <= N; i++) { //N�� ��� ���ϱ�
		if (N % i == 0) //����� ���,
			sum += i;   //����� �� ���ϱ�
	}
	
	do {
		val *= 10; //�ڸ��� �̵�
		val += sum % 10; //�� �ڸ��� ���ϱ�
		sum /= 10; //�� �ڸ��� �и��ϱ�

	} while (sum != 0); //���� �˻� ����� ������ �� �ݺ� ����	
	
	printf("%d", val); //������� ���� ���

	return 0; //���α׷� ���� ����
}