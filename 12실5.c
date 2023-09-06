#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, i, cnt1 = 0, cnt2 = 0;
	char *p = NULL; //���ڿ� ���� ������ ���� �� �ʱ�ȭ
	char c1, c2;

	scanf("%d", &N);
	getchar();	//%c Ư���� ���� Ű ����

	p = (char *)malloc((N + 1) * sizeof(char)); //���ڿ� ����(�� ����)��ŭ�� �޸� �����Ҵ�

	//�����Ҵ� ��������
	if (p == NULL) {
		printf("memory allocation failed\n");
		return -1;
	}

	for (i = 0; i < N; i++) 
		p[i] = getchar();	//���� ���� �Է¹ޱ�
	p[i] = '\0';	//���ڿ����� �˷���
	getchar();	//���� Ű ����

	c1 = getchar();	
	getchar();	//���� ���� ���� �ʿ�
	c2 = getchar();

	for (i = 0; i < N; i++) {
		if (p[i] == c1)	//���� ��ġ ���� ���� ����
			cnt1++;
		if (p[i] == c2)
			cnt2++;
	}

	printf("%d %d", cnt1, cnt2);

	//�����Ҵ� ���� �� ������ ����
	if (p != NULL) {
		free(p);	//�����Ҵ� ����
		p = NULL;	//������ �ּ� ����
	}

	return 0;
}