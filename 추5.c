#pragma warning (disable : 4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int M, N, i, max; //���� ����

	scanf("%d%d", &N, &M); //�� �� �Է�

	do {	
		if (N < M) //M�� �� ū ���
		{
			for (i = 1; i <= N; i++) //N�� �������� 
				if (M % i == 0 && N % i == 0) //��� ã��
					max = i; //�ִ����� ã��
		}
		else //N�� �� ū ���
		{
			for (i = 1; i <= M; i++) //M�� ��������
				if (M % i == 0 && N % i == 0) //��� ã��
					max = i; //�ִ����� ã��
		}
		printf("%d\n", max); //�ִ����� ���
		
		scanf("%d%d", &N, &M); //�� �� �Է�

	} while (N != 0 && M != 0); //�� �� �� �ϳ� 0 �Է� �� ����
	
	return 0; //���α׷� ���� ����
}