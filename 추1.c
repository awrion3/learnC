#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	char ch, ph ='z', dnt = 0, rnt = 0; //���� ���� �� �ʱ�ȭ

	do {
		scanf("%c", &ch); //���� �Է�

		if (ph == 'd' && ch == 'o') //���� ���� d �̹� ���� o�� �� ī��Ʈ
			dnt++;
		if (ph == 'r' && ch == 'e') //���� ���� r �̹� ���� e�� �� ī��Ʈ
			rnt++;

		ph = ch; //�̹� ���ڸ� ���� ���ڿ� ����

	} while (ch != '.'); //.�� �ԷµǱ� ������ �ݺ�

	printf("do=%d\n", dnt); //do �Է� Ƚ�� ���
	printf("re=%d\n", rnt); //re �Է� Ƚ�� ���
	
	return 0; //���α׷� ���� ����
}