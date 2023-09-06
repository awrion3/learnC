#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����
#include <string.h>	//���ڿ� ó�� ǥ�� �Լ� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, ln;
	char **p = NULL, *r = NULL;
	char tmp[101]; 	//�� ���� ���

	scanf("%d", &N);
	getchar();	//�Ʒ� gets_s ���

	p = (char**)malloc(N * sizeof(char*));

	if (p == NULL)	//�����Ҵ� Ȯ��//
		return -1;

	for (int i = 0; i < N; i++) {
		gets_s(tmp, 100);	//������ ����
		ln = strlen(tmp);

		p[i] = (char*)malloc((ln + 1) * sizeof(char));	//�ش� ���ڿ��� �°� �޸� �����Ҵ�

		if (p[i] == NULL)	//�����Ҵ� Ȯ��//
			return -1;

		strcpy(p[i], tmp);	//�����Ҵ�� ������ ����
	}

	for (int i = 0; i < N - 1; i++) { //�������� �������� + ���ڿ� �ƴ� �ּҸ� ��ȯ
		for (int j = i + 1; j < N; j++)
			if (strlen(p[i]) < strlen(p[j])) {	
				r = p[j];
				p[j] = p[i];
				p[i] = r;
			}
	}

	for (int i = 0; i < N; i++)
		printf("%s\n", p[i]);

	//�����Ҵ� ���� �� ��۸� ������ ����
	for (int i = 0; i < N; i++) 
		if (p[i] != NULL) {
			free(p[i]);
			p[i] = NULL;
		}

	if (p != NULL) {
		free(p);
		p = NULL;
	}
	
	return 0;
}