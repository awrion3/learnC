#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int row, col;
	char alp = 'a';
	char** p = NULL;

	scanf("%d%d", &col, &row);

	//row�࿡ ����, 2���� �迭�� ���� �����Ҵ�
	p = (char**)malloc(row * sizeof(char*));

	//�����Ҵ� Ȯ��
	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//col���� ����, 1���� ���ڿ��� ���� �����Ҵ�
	for (int i = 0; i < row; i++) {
		p[i] = (char*)malloc(col * sizeof(char));

		//�����Ҵ� Ȯ��
		if (p[i] == NULL) {
			printf("failed\n");
			return -1;
		}
	}

	//�����Ҵ� ��� (�Է�)
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			p[i][j] = alp++;

			if (alp == 'z' + 1)
				alp = 'A';
			else if (alp == 'Z' + 1)
				alp = 'a';
		}

	//�����Ҵ� ��� (���)
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%c ", p[i][j]);
		printf("\n");
	}

	//�����Ҵ� ����
	for (int i = 0; i < row; i++)
		if (p[i] != NULL) 
			free(p[i]);	//�� (�ະ) 1���� ���ڿ��� ���� �����Ҵ� ����

	if (p != NULL)	
		free(p);	//��ü (2����) ������ �迭�� ���� �����Ҵ� ����

	return 0;
}