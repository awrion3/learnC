#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	//���� ������ ����
	char fname1[21], fname2[21], fname3[21], ch;	//�� ���� ���
	FILE *fp1, *fp2;

	gets_s(fname1, 20);	//����� Ű������� ���� �̸� �ΰ� �Է¹ޱ�(���� ����)
	gets_s(fname2, 20);
	gets_s(fname3, 20);	//���� �̸� �ϳ� �Է¹ޱ�

	//���� ����
	fp1 = fopen(fname1, "w");	//���� ���� ����
	fp2 = fopen(fname2, "w");

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//���� ���
	fprintf(fp1, "%s\n", fname1);	//���� �̸� �� ���� ���Ͽ� ���(����)
	fprintf(fp1, "%s", fname2);
	fprintf(fp2, "%s", fname3);		//���� �̸� �ϳ��� ���Ͽ� ���

	//���� �ݱ�//
	fclose(fp1);
	fclose(fp2);

	//�ٽ� ���� ����
	fp1 = fopen(fname1, "a");	//�߰� ���� ���� ����
	fp2 = fopen(fname2, "r");	//�б� ���� ����

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//���� ���
	ch = fgetc(fp2);	//��� ���Ͽ��� ���� �� �� �о ����ϱ�
	while (!feof(fp2)) {	//������ ������ �ݺ�
		fputc(ch, fp1);	//�Է� ���Ͽ� ����(�Է�)�ϱ�
		ch = fgetc(fp2);
	}

	//���� �ݱ�
	fclose(fp1);
	fclose(fp2);

	return 0;
}