#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch[20], ca, cdx; //���� ����
	char *cp;

	cp = ch; //������ ����

	for (int i = 0; i < 20; i++) {
		scanf("%c", &ca); 
		if (ca == '\n') //����Ű �Է½� �ݺ� ����
			break;
		else //�����ͷ� �迭 �����Ͽ� ����
			*(cp + i) = ca;
	}

	for (int i = 0; i < 20; i++) 
		if (*(cp + i) == '#') {
			cdx = i; //ù��° # �ε��� ��ġ ���ϱ�
			break;
		}

	for (int i = cdx - 1; i >= 0; i--)
		printf("%c", *(cp + i)); //ù��° # �������� ���ڸ� ���� ���

	return 0;
}