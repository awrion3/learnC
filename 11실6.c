#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct student {
	int gender, weight, height;
	int grade;
};

int main(void) {

	int N, i, gr1 = 0, gr2 = 0, gr3 = 0;
	struct student st[10];	//����ü �迭 ����

	scanf("%d", &N); //�л��� �Է�

	for (i = 0; i < N; i++)	//�л��� ����ü ��� �� �Է�
		scanf("%d%d%d", &st[i].gender, &st[i].weight, &st[i].height);

	//ǥ�� ���� ���� �ű�� (if�� ����: ū ������ �����)
	for (i = 0; i < N; i++) {
		if (st[i].gender == 1) {	 //��
			if (st[i].weight >= 70) {
				if (st[i].height >= 175) 
					st[i].grade = 1;
				else if (st[i].height >= 165)
					st[i].grade = 3;
				else 	
					st[i].grade = 2;
			}
			else if (st[i].weight >= 60) {
				if (st[i].height >= 175) 	
					st[i].grade = 2;
				else if (st[i].height >= 165) 
					st[i].grade = 1;
				else 
					st[i].grade = 3;
			}
			else {
				if (st[i].height >= 175)
					st[i].grade = 3;
				else if (st[i].height >= 165)
					st[i].grade = 2;
				else
					st[i].grade = 1;
			}
		}
		else {						 //��
			if (st[i].weight >= 60) {
				if (st[i].height >= 175)
					st[i].grade = 1;
				else if (st[i].height >= 165)
					st[i].grade = 3;
				else 
					st[i].grade = 2;
			}
			else if (st[i].weight >= 50) {
				if (st[i].height >= 175)
					st[i].grade = 2;
				else if (st[i].height >= 165)
					st[i].grade = 1;
				else
					st[i].grade = 3;
			}
			else {
				if (st[i].height >= 175)
					st[i].grade = 3;
				else if (st[i].height >= 165)
					st[i].grade = 2;
				else
					st[i].grade = 1;
			}
		}
	}

	//����� ���� �������� ��޺� �л� �� ���
	for (i = 0; i < N; i++) {
		if (st[i].grade == 1)
			gr1++;
		else if (st[i].grade == 2)
			gr2++;
		else if (st[i].grade == 3)
			gr3++;
	}

	printf("%d %d %d", gr1, gr2, gr3);

	return 0;
}