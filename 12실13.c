#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����
#include <string.h>	//���ڿ� ó�� ǥ�� �Լ� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, len;
	char** p = NULL, tmp[101], * s = NULL;

	scanf("%d", &N);
	getchar();

	//�����Ҵ�
	p = (char**)malloc(N * sizeof(char*));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//�����Ҵ� ���
	for (int i = 0; i < N; i++) {
		//�ӽ� ���ڿ� ����
		gets_s(tmp, 100);

		len = strlen(tmp);
		//2���� ������ �迭�� �� 1���� ���ڿ�(���� ����)�� ���� �����Ҵ�
		p[i] = (char*)malloc((len + 1) * sizeof(char));

		if (p[i] == NULL) {
			printf("failed\n");
			return -1;
		}
		//���ڿ� ����
		strcpy(p[i], tmp);
	}

	//��
	for (int i = 0; i < N - 1; i++)
		if (strcmp(p[i], p[i + 1]) > 0) {	//strcmp ����ؼ� �� ���ڿ��� ��
			s = p[i + 1];		//������ �ڿ� p[i]�� ���� ���, �ڷ� �̵���Ű��
			p[i + 1] = p[i];	//���ڿ� ��ü�� �ƴ� �ּҸ� ��ȯ
			p[i] = s;
		}

	//���
	for (int i = 0; i < N; i++)
		printf("%s\n", p[i]);

	//�����Ҵ� ����
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
/*
4
apricot
peach
willow
birch
*/
