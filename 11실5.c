#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct student {
	char name[9]; //�� ���� ����
	int kor, eng, mat;

	double avg;
	char res;
};

int main(void) {

	int N, i, sum[50] = { 0 };		//������ �迭 ���� �� �ʱ�ȭ
	struct student st[50], *p = st;	//����ü �迭 �� ����ü ������ ����

	scanf("%d", &N);	//�л� �� �Է�

	for (i = 0; i < N; i++, p++) 	//�����ͷ� �� ����ü ��� ����
		scanf("%s%d%d%d", p->name, &p->kor, &p->eng, &p->mat);
		//��� name�� �迭 �̸����� �ּ� ������ ���� �ʴ´�

	p = st; //�ٽ� ������ ��ġ �ʱ�ȭ
	for (i = 0; i < N; i++, p++) {
		sum[i] += (p->kor + p->eng + p->mat);

		//�ش� �л��� ����� �� ����ü�� ��� avg�� ����
		p->avg = (double)sum[i] / 3;
		
		//�ش� �л��� ��տ� ����� �� ����ü�� ��� res�� ���� ���� 
		if (p->avg <= 100 && p->avg >= 90)
			p->res = 'A';
		else if (p->avg >= 80)
			p->res = 'B';
		else if (p->avg >= 70)
			p->res = 'C';
		else
			p->res = 'D';
	}
	
	//���
	for (i = 0, p = st; i < N; i++, p++) //�����͵� �ʱ�ȭ���� ���� �ʱ�
		printf("%s %.1f %c\n", p->name, p->avg, p->res);

	return 0;
}