#pragma warning (disable : 4996) //scanf() ���� ����
#include <stdio.h>

int main(void) { 

	int N, i; //���� ����

	do {
		scanf("%d", &N); //N �Է�

		for (i = 1; i <= N; i++) { //N�� ��� ã��
			if (!(N % i)) //����� ��
				printf(" %d", i); //��� ���
		}
		printf("\n"); //�ٹٲ� ���
	} while (N != 0); //0 �Է� ������ �ݺ�
	
	return 0; //���α׷� ���� ����
}