#pragma warning (disable : 4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, M, V, cnt = 0; //���� ���� �� �ʱ�ȭ

	scanf("%d", &N); //N���� �� �Է�

	while (N > 0) { //Nȸ ���� �ݺ�	
		scanf("%d", &M); //�� M �Է�
		
		if (cnt == 1) //���� �� ���� Ȯ��
		{
			printf("%d\n", V + M); //���� ���� �̹� �� ���� �� ���
			cnt = 0; //���� �� Ȯ�� �ʱ�ȭ
		}

		V = M; //M�� V�� ����
		cnt++; //���� �� ���� Ȯ��

		N--; //�ݺ� ȸ�� ���� ����
	}

	return 0; //���α׷� ���� ����
}