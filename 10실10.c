#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �Լ� ���� ������� (gets_s, getchar ��)
#include <string.h>				//���ڿ� ó�� �Լ� ���� �������//

int main(void) {

	char str[101], mstr[101]; 
	int N, len, min, f = 0, j;

	scanf("%d", &N);
	getchar();	//���� Ű ����

	for (int i = 0; i < N; i++) {
		gets_s(str, 101);	//������ �����ϴ� ���ڿ� �Է¹���
		len = strlen(str);	//�Է��� ���ڿ��� ���� �ּҸ� �޾� ���� ����� ��ȯ

		if (f == 0) {		//�ּ� ���� ó�� ���� ������ �ʱ�ȭ
			min = len;
			for (j = 0; str[j]; j++) {	//�� ���� ������ ������ �ݺ�
				mstr[j] = str[j]; //�ּ� ���� mstr �ʱⰪ ����
			}
			mstr[j++] = '\0'; //�� ���� ����
			f = 1;
		}
		if (len < min) {	//�ּ� ���� ����
			min = len;
			for (j = 0; str[j]; j++) {
				mstr[j] = str[j]; //�ּ� ���� mstr ���� ����
			}
			mstr[j++] = '\0'; //�� ���� ����
		}
	}
	
	printf("%s", mstr);	//�ּ� ���� ���ڿ� mstr ���

	return 0;
}
