#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �Լ� ���� �������
#include <string.h>				//���ڿ� ó�� �Լ� ���� �������//

int main(void) {

	char str1[51], str2[51], str3[101];	//�� ���� ���

	//���ڿ� �Է�
	scanf("%s", str1);
	scanf("%s", str2);

	//���ڿ� �� �� ���ڿ� ����, ����
	if (strcmp(str1, str2) < 0) { //���� ��ȯ ��, str1�� ������ �տ� �ִٴ� ��
		strcpy(str3, str2);	//ū ���ڿ� 2�� ���� �� ���ڿ��� �����ϰ�
		strcat(str3, str1);	//���� ���ڿ� 1�� �� �ڿ� �����Ѵ�
	}
	else {
		strcpy(str3, str2);
		strcat(str3, str1);
	}

	//���� ��� ���ڿ� 3 ���
	printf("%s\n", str3);

	return 0;
}