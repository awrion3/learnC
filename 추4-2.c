#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, i, j, k; //���� ����

	scanf("%d", &N); //���� �Է�

	for (i = 0; i < N; i++) //�ﰢ���� �� ���� ���� 
	{
		for (j = 1; j < N - i; j++) //�ﰢ���� ���� ���� ����
			printf(" ");

		k = i + 1; //�� �ึ�� ��µ� ���� �ʱ�ȭ
		for (j = 0; j <= i * 2; j++) //�ﰢ���� �� ���� ����
		{
			if (j < i) {     //���� �κ� ���
				printf("%d", k--);
			}
			else if (j == i) //��� �κ� ���
			{
				k = 1; //����� ���� 1�� �ʱ�ȭ
				printf("%d", k);
			}
			else             //������ �κ� ���
				printf("%d", ++k);
		}
		printf("\n"); //�� �� �ٹٲ� ���
	}

	return 0; //���α׷� ���� ����
}