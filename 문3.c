#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch;
	int A = 0, a = 0, num = 0, ex = 0;	//���� ���� �� �ʱ�ȭ

	scanf("%c", &ch); //ù ���� �Է�

	while (ch != '*') { //'*'�� �Էµ� ������ ��� �Է�
		if (ch >= 'A' && ch <= 'Z')
			A++;		//�빮���� ���� ��
		else if (ch >= 'a' && ch <= 'z')
			a++;		//�ҹ����� ���� ��
		else if (ch >= '0' && ch <= '9')	//���� ������ ���,
		{
			if (ch == '0')			//��
				num += 0;
			else if (ch == '1')		//��
				num += 1;
			else if (ch == '2')		//��
				num += 2;
			else if (ch == '3')		//��
				num += 3;
			else if (ch == '4')		//��
				num += 4;
			else if (ch == '5')		//��
				num += 5;
			else if (ch == '6')		//��
				num += 6;
			else if (ch == '7')		//��
				num += 7;
			else if (ch == '8')		//��
				num += 8;
			else if (ch == '9')		//��
				num += 9;
		}
		else
			ex++;		//�� �̿� ���ڵ��� ���� ��
		scanf("%c", &ch);
	}

	printf("%d %d %d %d", A, a, num, ex);	//���� �� ���ʷ� ���

	return 0;
}