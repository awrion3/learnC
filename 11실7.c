#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct number {
	int num, rank;
};	//���⼭ ���� (�� �ʱ�ȭ) ��, ���� ������

int main(void) {

	int rak;
	struct number N[10];	//����ü �迭 ����

	//����ü �迭�� �� ����ü�� ��� num�� ������ ����
	for (int i = 0; i < 10; i++)
		scanf("%d", &N[i].num);
	
	//�� ����ü�� ��� rank�� ������ ����
	for (int i = 0; i < 10; i++) {
		rak = 1;
		for (int j = 0; j < 10; j++) {
			if (N[i].num < N[j].num)
				++rak;
		}
		N[i].rank = rak;
	}

	//����ü ��� ���� ���� ���� 3, 7���� ����ü�� ��� ������ ������� ���
	for (int i = 0; i < 10; i++)
		if (N[i].rank == 3)
			printf("%d ", N[i].num);
		
	for (int i = 0; i < 10; i++) 
		if (N[i].rank == 7)
			printf("%d ", N[i].num);

	return 0;
}

//����: ����ü �迭�� �� ����ü ��� num�� �������� �������� �����ϱ�
	/*
	for (int i = 0; i < 9; i++) 	//�������� �������
		for (int j = i + 1; j < 10; j++)
			if (N[i].num < N[j].num) {	//�������� ����
				tmp = N[i].num;
				N[i].num = N[j].num;	//�ڿ� �ִ� ū ���� ������ �̵�
				N[j].num = tmp;
			}

	for (int i = 0; i < 10; i++) {
		printf("%d ", N[i].num);
	}
	printf("\n");
	*/