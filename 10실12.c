#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �Լ� ���� ������� 
#include <string.h>				//���ڿ� ó�� �Լ� ���� �������//

int main(void) {

	char str1[101], str2[101];
	int i = 0, j = 0, istm = 0, f = 0;

	//������ �����ϴ� ���ڿ� �Է¹ޱ�
	gets_s(str1, 101);
	gets_s(str2, 101);

	while (str1[i]) { //�� ���� ������ str1�� �� ���� (�Ʒ� �ε����� ����)
		while (str1[i++] == str2[j++]) {

			if (j == strlen(str2)) {
				istm++;	//�� Ƚ�� �����ϱ�
				break;
			}
			f = 1;
		}
		j = 0;			//���� ���� ��, str2 �ε��� ó������ �ʱ�ȭ

		if (f == 1) {	//���� �ݺ� ���� ��, str1 �ε��� ��ĭ �ڷ� �ʱ�ȭ
			i--;
			f = 0;		//��) str1: Hel'loworld str2: lo'���� ���� �ʾƼ� ƨ�ܳ�����,
		}				//�״��� Hello'world���� �ƴ� Hell'oworld���� �ٽ� ���ϱ� ����
	}

	//���� Ƚ�� ���
	printf("%d\n", istm); 

	return 0;
}