#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �������

int main(void) {

	int iseq = 1, str1len = 0;
	char str1[100], str2[100];

	scanf("%s", str1);
	scanf("%s", str2); //%c�� �޸� getchar() ������� �ʾƵ� ��?

	for (int i = 0; str1[i]; i++)
		str1len++;		//ù ��° ���ڿ��� ���� ����

	for (int i = 0; str1[i] && str2[i]; i++) { //�� ���ڿ� �� �ϳ��� �� ���� ���� �� ����
		if (str1[i] != str2[i]) {
			iseq = 0;	//���� �ʴٰ� ����
			break;		//���� ������ ���� ����� �ݺ������� Ż��
		}
	}

	printf("%d %d", str1len, iseq); //���ڿ��� ���� �� ��ġ ���� ���

	return 0;
}