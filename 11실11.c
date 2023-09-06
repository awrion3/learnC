#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct student {
	char name[10]; //�� ���� ���
	int score;
};

//�Լ� ����
struct student* select_min(struct student *);

int main(void) {

	struct student cl[5], *r;	//����ü �迭 �� ����ü ������ ����

	for (int i = 0; i < 5; i++)
		scanf("%s%d", cl[i].name, &cl[i].score);	//�ּ� ������ �ٰ� �Ⱥٰ� ����

	r = select_min(cl);    //�迭�̸� ���� (�ּ� ������ �� ����)

	printf("%s %d", r->name, r->score); //�����͸� Ȱ���� ������ �� ���

	return 0;
}

//�Լ� ����
struct student* select_min(struct student *ar) {

	//�����Ͱ� ����ü �迭�� 0�� ���� (ù��° ����ü)�� ����Ű�� ��
	int min = ar->score; //�̸� Ȱ���� ù��° ����ü�� ����� ������ �ּҰ� �ʱ�ȭ

	struct student *p = ar + 1;	//�ݺ����� ���� �� ������ ����
	struct student *r = ar;	//��ȯ���� ���� �� �����͵� ���� (�� �Ʒ� �ݺ��� min ���� ������ �ø� ���� ��ȯ�� �ʱ�ȭ)

	for (; p < ar + 5; p++) {
		if (min > p->score) {
			min = p->score; //�ּҰ� ����
			r = p;	//�ش� ����ü (����)�� �ּҰ��� ����
		}
	}

	return r;	//����� �ּҰ� score�� ���� ����ü(�迭�� ����)�� �ּ� ��ȯ
}