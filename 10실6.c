#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �������

int main(void) {

	int idx, str1len = 0, str2len = 0, isr;
	char str1[20], str2[20];

	scanf("%s%s%d%d", str1, str2, &idx, &isr);	//��5 + ���� ���� Ȯ��

	//���� ���
	for (int i = 0; str1[i]; i++)
		str1len++;

	for (int i = 0; str2[i]; i++)
		str2len++;

	//
	for (int i = str1len; i >= idx; i--) //�ڷ� ���ڿ�2 ���̸�ŭ�� �ű�� (�� ���� ����)
		str1[i + str2len] = str1[i];

	//���ڿ� 1�� ���ڿ� 2 �����ϱ� (�� ���� ����)
	if (isr == 0)	//������ ��,
		for (int j = 0; j < str2len; j++)
			str1[idx++] = str2[j]; 
	else			//������ ��,
		for (int j = str2len - 1; j >= 0; j--)
			str1[idx++] = str2[j]; 

	//����� ���ڿ� 1 ���
	printf("%s", str1);

	return 0;
}