#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, D, *p = NULL;

	scanf("%d", &N);

	p = (int*)malloc(N * sizeof(int));	//1���� �迭 �޸� �����Ҵ�

	//�����Ҵ� Ȯ��
	if (p == NULL) {
		printf("memory allocation falied\n");
		return -1;
	}

	//�����Ҵ� ���
	for (int i = 0; i < N; i++)
		scanf("%d", &p[i]);

	scanf("%d", &D);

	//�����Ҵ� �޸� ���� ũ�� ����
	p = (int*)realloc(p, (N - D) * sizeof(int)); //�Ҵ�� �޸� ���� ũ�� ����
												//sizeof ������ �ʿ�?
	for (int i = 0; i < N - D; i++)
		printf("%d\n", p[i]);

	//�����Ҵ� ����
	if (p != NULL) {
		free(p);
		p = NULL; //��۸� ������ ����
	}

	return 0;
}
/*
4
120111
15011123
16011145
16011300
1
*/