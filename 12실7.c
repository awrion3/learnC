#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, *p = NULL, tmp;

	scanf("%d", &N);
	
	//�����Ҵ�
	p = (int*)malloc(N * sizeof(int));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//�� �Է�
	for (int i = 0; i < N; i++)
		scanf("%d", &p[i]);

	//�������� 1ȸ
	for (int i = 0; i < N - 1; i++)
		if (p[i] > p[i + 1]) {
			tmp = p[i + 1];
			p[i + 1] = p[i];
			p[i] = tmp;
		}

	//���
	for (int i = 0; i < N; i++)
		printf("%d\n", p[i]);

	//�����Ҵ� ����
	if (p != NULL)
		free(p);

	return 0;
}