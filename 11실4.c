#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct student {
	char name[20]; //�� ���� ����
	int score[3];

	double avg;
	char res;
};

int main(void) {

	struct student clas[20]; //����ü ���� ���� (����ü �迭 ����)
	int N, sum[20];

	//�Է��ؼ� �л� ����ü �� ��� name �� �� score �� ����
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", clas[i].name);	//�� ��� �迭 �̸� �տ��� �ּ� ������ �Ⱥ���
		for (int j = 0; j < 3; j++)
			scanf("%d", &clas[i].score[j]);
	}

	//����ؼ� �л� ����ü �� avg ��� �� ����
	for (int i = 0; i < N; i++) {
		sum[i] = 0; //�� �ʱ�ȭ
		for (int j = 0; j < 3; j++)
			sum[i] += clas[i].score[j];

		clas[i].avg = (double)sum[i] / 3;
	}

	//����ü �迭�� �� ����(�л� ����ü) �� ��� ���� ���� ���� res ��� �� ����
	for (int i = 0; i < N; i++) {
		if (clas[i].avg >= 90)	
			clas[i].res = 'A';
		else if (clas[i].avg >= 80)
			clas[i].res = 'B';
		else if (clas[i].avg >= 70)
			clas[i].res = 'C';
		else
			clas[i].res = 'F';
	}

	//���
	for (int i = 0; i < N; i++)
		printf("%s %.1f %c\n", clas[i].name, clas[i].avg, clas[i].res);

	return 0;
}