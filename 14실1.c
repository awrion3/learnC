#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num, R, cnt = 0, sum = 0;
	double avg;

	FILE *fp;	//���� ������ ����

	//���� ����1
	fp = fopen("data.txt", "w");	//���� ���� ������ ���� ������ �Է��� �غ�
	
	if (fp == NULL) {
		printf("couldn't open file\n");
		return -1;	//���α׷� ������ ����
	}

	//���� ���1
	fscanf(stdin, "%d", &num);	//����� Ű����κ��� ������ �޾ƾ��� (scanf�� ����) 

	while(!feof(stdin)) {		//EOF �Էµ� ������ �ݺ��ϱ� 
		fprintf(fp, "%d\n", num);	//�����͸� ���Ϸ� ��� (����)
		fscanf(stdin, "%d", &num);	//����: stdin�� FILE �����͸�, fscanf�� �б⿡ ���н� EOF �� ��ȯ. R = �� Ȱ���� R != EOF�ε� �� ����//
	}
	//EOF �Է��� ctrlZ (scanf ���� ���� 3�� �Է��ؾ� �Կ� ����)
	 
	//���� �ݱ�1
	fclose(fp);

	//���� ����2
	fp = fopen("data.txt", "r");	//�б� ���� ������ ���� ������ ����� �غ�

	if (fp == NULL) {
		printf("couldn't open file\n");
		return -1;
	}

	//���� ���2
	fscanf(fp, "%d", &num);	//���Ϸκ��� ������ �о���̱�

	while (!feof(fp)) {		//������ ���� ���� ������ �ݺ��ϱ�
		cnt++;		//���� ���� ���ϱ�
		sum += num;	//���� �հ� ���ϱ�
		fscanf(fp, "%d", &num);
	}

	avg = (double) sum / cnt;	//���� ��� ���ϱ�

	printf("%d\n%d\n%.2f\n", cnt, sum, avg);	//���� ����ϱ�	

	//���� �ݱ�2
	fclose(fp);
	
	return 0;
}