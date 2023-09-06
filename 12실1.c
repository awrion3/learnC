#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, *p = NULL;
	int sum = 0;

	scanf("%d", &N);

	p = (int*)malloc(N * sizeof(int));	//int�� �迭�� ���� �����Ҵ�

	if (p == NULL) {	//�����Ҵ� ���н� �Լ� ������ ����
		printf("Not Enough Memory\n");
		return -1;
	}

	for (int i = 0; i < N; i++)	{
		scanf("%d", &p[i]); //�迭 ���·� ������ ����Ͽ� ���ҿ� ���� ����
		//����: �����Ҵ����� �����Ͽ��⿡, �ش� �迭�� �̸��� ���ٴ� ��!
		sum += p[i];
	}

	printf("%d", sum);

	if (p != NULL) {
		free(p); //�޸� ���� (leak)�� ���� ���� �����Ҵ� ���� 
		p = NULL; //�޸� ���� �� �����Ϳ��� NULL ���� (dangling pointer ���� ����)
	}

	return 0;
}