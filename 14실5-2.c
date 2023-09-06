#pragma warning(disable:4996)
#include <stdio.h>

struct student {
	char name[11];	//�� ���� ���
	int score;
};

int main(void) {

	struct student st[3];	//����ü �迭 ����
	FILE* sp;			//���� ������ ���� ����

	//���� ����
	sp = fopen("student.dat", "rb");	//�б� ���� ���� ���� ����

	if (sp == NULL)
		return -1;

	//���� ���
	for (int i = 0; i < 3; i++) {
		fread(st[i].name, sizeof(char), 11, sp);	//���� ���Ͽ��� �Է¹޾� ����ü�� ����
		fread(&st[i].score, sizeof(int), 1, sp);
	}

	//���� �ݱ�
	fclose(sp);

	//����ü ���
	for (int i = 0; i < 3; i++) 
		printf("%s %d\n", st[i].name, st[i].score);
	
	return 0;
}