#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h> //���ڿ� ó�� �Լ� ����

//����ü ����
struct student {
	char name[10];		//�л��� �̸� 
	int sc1, sc2, sc3;	//�л��� �� ����
	double avg;			//�л��� ���//
};

//�Լ� ����
void read_data(struct student []);	//��ȯ ���� (����ü �迭 ����)
void cal_avg(struct student []);
void sort(struct student []);
void print_score(struct student []);

int main(void) {

	struct student cl[10]; //����ü �迭 ����

	read_data(cl);
	
	cal_avg(cl);

	sort(cl);

	print_score(cl);

	return 0;
}

//�Լ� ����
void read_data(struct student ar[]) {

	struct student *p = ar;	//�����Ϳ� �迭 �̸� ����

	for (; p < ar + 10; p++) {	//������ Ȱ���ؼ� ����ü �迭 �����Ͽ�
		scanf("%s", p->name);	//�ش� ����ü ������ ����� �� �Է�
		scanf("%d%d%d", &p->sc1, &p->sc2, &p->sc3);	//�ּ� �����ڿ� ����
	}
}

void cal_avg(struct student ar[]) {

	struct student *p = ar;

	for (; p < ar + 10; p++) //�ش� ����ü ������ ��� avg �� ����
		p->avg = (double)(p->sc1 + p->sc2 + p->sc3) / 3;
}

void sort(struct student ar[]) {

	struct student *p = ar, *q;
	double tmp;
	char str[10];	//�ӽ� ������ ���ڿ� ���
	int imp;

	for (; p < ar + 9; p++) {
		for (q = p + 1; q < ar + 10; q++) { //�����͸� �̿��� ��������
			if (p->avg < q->avg) {
				tmp = q->avg;	
				q->avg = p->avg;
				p->avg = tmp;

				//������������ ����ü ���� �� ��� name �ٲٸ� ����
				strcpy(str, q->name);
				strcpy(q->name, p->name); //�迭 �̸��� �������� �ʵ��� �Ѵ�
				strcpy(p->name, str);

				//������������ ����ü ���� �� ����� score �ٲٸ� ����
				imp = p->sc1;
				q->sc1 = p->sc1;
				p->sc1 = imp;

				imp = p->sc2;
				q->sc2 = p->sc2;
				p->sc2 = imp;

				imp = p->sc3;
				q->sc3 = p->sc3;
				p->sc3 = imp;
			}
		}
	}
}

void print_score(struct student ar[]) {

	struct student *p = ar;

	//�ְ������ �� ��������� �л��� �̸��� ��� ���
	printf("%s %.2f\n", p->name, p->avg);
	p = ar + 9;
	printf("%s %.2f\n", p->name, p->avg);

	//���� 30%�� ����� ���� �л����� �̸��� ��� ���
	for (p = ar; p < ar + 10; p++) 
		if (p >= ar + 7) //�������� ������ �߱⿡ ����
			printf("%s %.2f\n", p->name, p->avg);
}
/*
AKim 80 80 80
BKim 90 90 90
CKim 81 81 81
ALee 82 82 82
BLee 83 83 83
CLee 84 84 84
APark 85 85 85
BPark 86 86 86
CPark 87 87 87
DPark 88 88 88
*/