#pragma warning(disable:4996)
#include <stdio.h>

struct student {
	char name[11];	//�� ���� ���
	int score;
};

int main(void) {

	struct student st[3];	//����ü �迭 ����
	FILE *sp;			//���� ������ ���� ����

	//����ü ���
	for (int i = 0; i < 3; i++){
		scanf("%s%d", st[i].name, &st[i].score);
		getchar();	//����Ű ����
	}

	//���� ����
	sp = fopen("student.dat", "wb");	//���� ���� ���� ���� ����
	
	if (sp == NULL)
		return -1;

	//���� ���
	for (int i = 0; i < 3; i++) {
		fwrite(st[i].name, sizeof(char), 11, sp);	//���� ���Ϸ� ���
		fwrite(&st[i].score, sizeof(int), 1, sp);	
	}

	//���� �ݱ�
	fclose(sp);

	return 0;
}