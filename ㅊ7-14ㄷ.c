#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	/*����*/
	int M, N, S[20][20], i, j;
	int m1, m2, n1, n2, tmp;

	/*�Է�*/
	scanf("%d%d", &M, &N);

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &S[i][j]);

	scanf("%d%d", &m1, &n1);
	scanf("%d%d", &m2, &n2);

	/*���*/
	if (m1 < m2) //���� �ε��������� �����ϸ� ��
	{
		for (i = m1; i <= m2 / 2; i++) //��ȯ�� �ѹ����� �Ͼ�� ��! (�� �̵� ���ݱ����� ���ߵ�)
			for (j = n1; j <= n2; j++)
			{
				tmp = S[i][j];
				S[i][j] = S[m1 + m2 - i][n1 + n2 - j]; //��ȯ �� ��Ģã��
				S[m1 + m2 - i][n1 + n2 - j] = tmp;
			}
	}
	else
	{
		for (i = m2; i <= m1 / 2; i++) //=�� m1 ���� ���� �ε����̱� ������ ���ÿ�, / 2�� �߱� ������ ���
			for (j = n2; j <= n1; j++)
			{
				tmp = S[i][j];
				S[i][j] = S[m1 + m2 - i][n1 + n2 - j];
				S[m1 + m2 - i][n1 + n2 - j] = tmp;
			}

	}

	/*���*/
	for (i = 0; i < M; i++)
	{	for (j = 0; j < N; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}

	return 0;
}