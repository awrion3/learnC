#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct student {
	char name[5];	//�� ���� ���
	int score;
};

int main(void) {

	int sum = 0;
	double avg;
	//����ü ���� ���� (�迭 ����)
	struct student clas[5];

	for (int i = 0; i < 5; i++) {
		scanf("%s", clas[i].name);	//�迭 �̸��̹Ƿ� �ּ� ������ ������� ������ ����
		scanf("%d", &clas[i].score);
	} //scanf�� %s�� 1) ����/����/�� ���� ���ϸ�(������ �ν�) 2) �� ���� ���� ���ڿ��� �������ش� (���ڰ� �ּ���)
	  //���� ����! %c�� ��� getchar()�� �ʿ��Ͽ�����, %s�� �ƴϴ�! 

	for (int i = 0; i < 5; i++) 
		sum += clas[i].score;

	avg = (double)sum / 5;

	//���
	for (int i = 0; i < 5; i++) 
		if (clas[i].score <= avg)
			printf("%s\n", clas[i].name);

	return 0;
}