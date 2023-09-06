#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N;
	float *p = NULL, max = 0.0;

	scanf("%d", &N);	//int�� N ������ �Է�

	p = (float*)malloc(N * sizeof(float));	//float�� �迭�� �����Ҵ�

	if (p == NULL) {
		printf("memory allocation failed\n");
		return -1;
	}

	for (int i = 0; i < N; i++) {
		scanf("%f", &p[i]);	//float�� �迭 ���� �� �Է¹ޱ�

		if (p[i] > max)
			max = p[i];
	}

	printf("%.2f", max); //float�� �ִ밪 ����ϱ�

	if (p != NULL) {
		free(p);	//�����Ҵ� ����
		p = NULL;	//������ �ּ� ����
	}

	return 0;
}