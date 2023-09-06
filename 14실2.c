#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char ch;
	FILE *fp1, *fp2;	//���� ������ ����

	//���� ����
	fp1 = fopen("test1.txt", "r");	//�̹� �����Ͱ� ����� ���Ϸ� �б� ����
	fp2 = fopen("test2.txt", "w");	//�����͸� ������ ���Ϸ� ���� ����

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//���� ���
	for (int i = 0; i < 9; i++) {
		fscanf(fp1, "%c", &ch);	//���Ϸκ��� ������ �Է¹ޱ�

		//��ҹ��� �����ؼ�
		if (ch >= 'A' && ch <= 'Z')
			ch += ('a' - 'A');
		else if (ch >= 'a' && ch <= 'z')
			ch -= ('a' - 'A');

		fprintf(fp2, "%c", ch);	//���Ϸ� ������ ���(����)�ϱ� (���� ����)
	}
	
	//���� �ݱ�
	fclose(fp1);
	fclose(fp2);

	return 0;
}