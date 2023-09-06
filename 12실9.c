#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����
#include <string.h>	//���ڿ� ó�� ǥ�� �Լ� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, ln, min;
	char **p = NULL;
	char temp[100], *r = NULL;

	scanf("%d", &N);
	getchar();	//�Ʒ� gets_s���� ����Ű �Էµ��� �ʵ��� ����! (�� ��� ù��° ���ڿ��� �η� �����)

	//�Ҵ�
	p = (char**)malloc(N * sizeof(char*));

	if (p == NULL) 
		return -1;

	//�Է�
	for (int i = 0; i < N; i++) {
		gets_s(temp, 100);	//���� ����, ���� ���� �� ���� �ڵ� �߰�
		
		ln = strlen(temp);

		p[i] = (char*)malloc((ln + 1) * sizeof(char));	//�� ���� ũ�� ���
		
		if (p[i] == NULL)
			return -1;

		strcpy(p[i], temp);
	}

	//��
	min = strlen(p[0]);

	for (int i = 1; i < N; i++)
		if (strlen(p[i]) < min) {
			min = strlen(p[i]);
			r = p[i];
		}
	
	//���
	printf("%s", r);

	//����
	for (int i = 0; i < N; i++)
		if (p[i] != NULL){
			free(p[i]);
			p[i] = NULL;
		}

	if (p != NULL){
		free(p);
		p = NULL;
	}

	return 0;
}