#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	//���� ������ ����
	char fname1[21], fname2[21], ch;	//�� ���� ���
 	FILE *fp1, *fp2;

	gets_s(fname1, 20);	//����� Ű������� ���� �̸� �� �� �Է¹ޱ�(���� ����)
	gets_s(fname2, 20);

	//���� ����
	fp1 = fopen(fname1, "w");	//���� ���� ����

	if (fp1 == NULL)
		return -1;

	//���� ���
	fprintf(fp1, "%s\n", fname1);	//���� �̸� �� ���� ���Ͽ� ���(����)
	fprintf(fp1, "%s", fname2);

	//���� �ݱ�//
	fclose(fp1);
	
	//���� ����
	fp1 = fopen(fname1, "r");	//�̹��� �б� ���� ����
	fp2 = fopen(fname2, "w");	//���� ���� ����

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//���� ���
	ch = fgetc(fp1);	//�Է� ���Ͽ��� ���� �� �� �о
	while (!feof(fp1)) {	//������ ������ �ݺ�
		fputc(ch, fp2);	//��� ���Ͽ� �����ϱ�
		ch = fgetc(fp1);
	}

	//���� �ݱ�
	fclose(fp1); 
	fclose(fp2);

	return 0;
}