#pragma warning (disable:4996) //scanf()�� ���� warning ����
#include <stdio.h>

int main(void) {

	int N, M, x = 1, i; //���� ���� �� �ʱ�ȭ

	scanf("%d", &N); //N���� ���� �Է�

	while (x <= N) { //Nȸ �ݺ��ؼ�
		scanf("%d", &M); //���� M �Է�

		printf("%d:", M); //���� M�� ���

		for (i = 1; i <= M; i++) //���� M�� ��� ���ϱ�
			if (!(M % i)) //������ ������ ��,
				printf(" %d", i); //����� ���
		
		printf("\n"); //�ٹٲ� ���
		x++; //Nȸ ��ŭ �ݺ��ϵ��� ����
	}

	return 0; //���α׷� ���� ����
}