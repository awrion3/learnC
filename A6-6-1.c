#pragma warning (disable:4996) //scanf()�� ���� warning ����
#include <stdio.h>

int main(void) {

	int N, i, j; //���� ����

	scanf("%d", &N); //���� N �Է�

	for (i = 0; i < N; i++) { //�ﰢ���� ���̸�ŭ ���
		for (j = 1; j < N - i; j++) //�ﰢ���� ���� ���� ��� 
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++) //�ﰢ���� X�� O ���
			if (j == 0 || j == i * 2 || i == N - 1) //�ﰢ������ X�� ����� ����
				printf("X");
			else							//�ﰢ������ O�� ����� ����
				printf("O");
		printf("\n"); //�� �� ��� �� �ٹٲ�
	}

	return 0; //���α׷� ���� ����
}