#pragma warning (disable : 4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, i, j; //���� ����

	scanf("%d", &N); //���� �Է�

	for (i = 1; i <= 6; i++) //�ֻ��� �ϳ�
		for (j = 1; j <= 6; j++) //�ֻ��� ���� 
			if ((i + j) % N == 0) //���� N�� ����� �Ǵ� ���
				printf("%d %d\n", i, j); //���ʷ� ����ϱ�

	return 0; //���α׷� ���� ����
}