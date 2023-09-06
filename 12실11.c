#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, *p = NULL, k = 0, tmp[20];

	//�⺻ �迭 (�����Ҵ� ���)
	p = (int*)malloc(5 * sizeof(int));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//realloc ���� �����Ҵ� ���Ӱ� ���
	do {
		scanf("%d", &N);	//-1�� ���� �ǹǷ�

		if (k >= 5 && k % 3 == 2) {

			for (int i = 0; i < k; i++)
				tmp[i] = p[i]; //����ϱ�
			
			free(p); //�����ϰ� �� �޸� ���� Ȯ��
			p = (int*)malloc((k + 3) * sizeof(int));	//�迭 ���� 3�� ����

			if (p == NULL) {
				printf("failed\n");
				return -1;
			}

			for (int i = 0; i < k; i++)
				p[i] = tmp[i]; //�̵��ϱ�
		}

		p[k++] = N;

	} while (N != -1 && k < 20);

	for (int i = 0; i < k; i++)
		printf(" %d", p[i]);

	//����
	if (p != NULL) {
		free(p);
		p = NULL;
	}

	return 0;
}