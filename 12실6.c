#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

//����ü ����
struct student {
	char name[8];	//�� ���� ����
	int kor, eng, mat;
	double avg;
};

int main(void) {

	int N;
	struct student *p = NULL;

	scanf("%d", &N);
	
	//�����Ҵ� 
	p = (struct student*)malloc(N * sizeof(struct student));

	//�����Ҵ� Ȯ��
	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//�����Ҵ� ��� (�Է�)
	for (int i = 0; i < N; i++) {	//����ü �迭 ����
		scanf("%s%d%d%d", p[i].name, &p[i].kor, &p[i].mat, &p[i].eng);	//�� ����ü ��� ����
		p[i].avg = (double)(p[i].kor + p[i].mat + p[i].eng) / 3;
	}

	//�����Ҵ� ��� (���)
	for (int i = 0; i < N; i++) {
		printf("%s %.1f ", p[i].name, p[i].avg);

		if (p[i].kor >= 90 || p[i].mat >= 90 || p[i].eng >= 90)
			printf("GREAT ");
		if (p[i].kor < 70 || p[i].mat < 70 || p[i].eng < 70)
			printf("BAD ");

		printf("\n");
	}

	//�����Ҵ� ����
	if (p != NULL)
		free(p);

	return 0;
}