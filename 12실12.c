#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, M, k = 0, *p = NULL, *r = NULL;
	
	scanf("%d", &N);

	//�����Ҵ� 1
	p = (int*)malloc(N * sizeof(int));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//�� ����
	for (int i = 0; i < N; i++)
		p[i] = i;

	//�����Ҵ�2
	M = N - 1;
	
	r = (int*)malloc(M * sizeof(int));

	//�� ����
	for (int i = 0; i < N; i++) {
		if (i == N / 2)	//�߾Ӱ� ����
			continue;
		r[k++] = p[i];
	}

	//���
	for (int i = 0; i < M; i++)
		printf(" %d", r[i]);

	//����
	if (p != NULL) {
		free(p);
		p = NULL;
	}

	if (r != NULL) {
		free(r);
		r = NULL;
	}

	return 0;
}