#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �������

int main(void) {
	
	int num, n, v, cnt = 0, idx = 0;
	char str[40], *pstr = NULL; 
	//ũ�� ���: (�� ǥ��5 +����1 + �ڸ� ǥ��3 +����1) * �ִ� 4�ڸ�

	scanf("%d", &num);
	
	//�ڸ��� ���� �� �� ������
	n = num; v = 0;
	while (n != 0) {
		v *= 10;	//�� ������
		v += n % 10;
		cnt++;		//�ڸ��� ����
		n /= 10;
	}

	num = v; //������ �� �����ϱ�
	while (num != 0) {
		v = num % 10;

		//�� ���� + �ڸ����� �����ϴ� ���ڿ� ���ϱ�
		if (v == 9) {
			if (cnt == 4)
				pstr = "nine THO ";
			else if (cnt == 3)
				pstr = "nine HUN ";
			else if (cnt == 2)
				pstr = "nine TEN ";
			else
				pstr = "nine ";
		}
		else if (v == 8) {
			if (cnt == 4)
				pstr = "eight THO ";
			else if (cnt == 3)
				pstr = "eight HUN ";
			else if (cnt == 2)
				pstr = "eight TEN ";
			else
				pstr = "eight ";
		}
		else if (v == 7) {
			if (cnt == 4)
				pstr = "seven THO ";
			else if (cnt == 3)
				pstr = "seven HUN ";
			else if (cnt == 2)
				pstr = "seven TEN ";
			else
				pstr = "seven ";
		}
		else if (v == 6) {
			if (cnt == 4)
				pstr = "six THO ";
			else if (cnt == 3)
				pstr = "six HUN ";
			else if (cnt == 2)
				pstr = "six TEN ";
			else
				pstr = "six ";
		}
		else if (v == 5) {
			if (cnt == 4)
				pstr = "five THO ";
			else if (cnt == 3)
				pstr = "five HUN ";
			else if (cnt == 2)
				pstr = "five TEN ";
			else
				pstr = "five ";
		}
		else if (v == 4) {
			if (cnt == 4)
				pstr = "four THO ";
			else if (cnt == 3)
				pstr = "four HUN ";
			else if (cnt == 2)
				pstr = "four TEN ";
			else
				pstr = "four ";
		}
		else if (v == 3) {
			if (cnt == 4)
				pstr = "three THO ";
			else if (cnt == 3)
				pstr = "three HUN ";
			else if (cnt == 2)
				pstr = "three TEN ";
			else
				pstr = "three ";
		}
		else if (v == 2) {
			if (cnt == 4)
				pstr = "two THO ";
			else if (cnt == 3)
				pstr = "two HUN ";
			else if (cnt == 2)
				pstr = "two TEN ";
			else
				pstr = "two ";
		}
		else if (v == 1) {
			if (cnt == 4)
				pstr = "one THO ";
			else if (cnt == 3)
				pstr = "one HUN ";
			else if (cnt == 2)
				pstr = "one TEN ";
			else
				pstr = "one ";
		}
		else	//0�� ��� �ƹ��͵� ����
			pstr = "";

		for (int i = 0; pstr[i]; i++) //�� ���� ������ �� ������
			str[idx++] = pstr[i];
		//���� pstr�� �� �ٽ� ���ο� ���ڿ� ��� �Է¹��� ���̸�,
		//str[idx]�� �̾ �� ���ڿ� ����� �ٿ��� ����

		cnt--; //�ڸ��� �ϳ��� �ٿ�����
		
		num /= 10;
	}

	str[idx++] = '\0';	//�������� �� ���� ���� (���� 0�� ��� �길 ����ϴ� ��)

	printf("%s", str);

	return 0;
}