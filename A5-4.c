#pragma warning (disable:4996)  //scanf_s() �Լ� ��� ���� ������ ���� ����
#include <stdio.h>              //ǥ������� ���� ��� ���� ����

int main(void) {                //���α׷� ���� ���� main() �Լ�

	int a;						//int�� ���� ����
	scanf("%d", &a);			//scanf()�� ���� 10�� ���� �Է�

	if (10 <= a && a < 20)				// 10 �̻� 20 �̸��� ������ ���� ���� //
	{
		switch (a)						// �� ���� ���� �� ������ ���Ͽ�
		{
		case 10: printf("ten"); break;			// 10 ���� �� ���
		case 11: printf("eleven"); break;		// 11 ���� �� ���
		case 12: printf("twelve"); break;		// 12 ���� �� ���
		case 13: printf("thirteen"); break;		// 13 ���� �� ���
		case 14: printf("fourteen"); break;		// 14 ���� �� ���
		case 15: printf("fifteen"); break;		// 15 ���� �� ���
		case 16: printf("sixteen"); break;		// 16 ���� �� ���
		case 17: printf("seventeen"); break;	// 17 ���� �� ���
		case 18: printf("eighteen"); break;		// 18 ���� �� ���
		case 19: printf("nineteen");			// 19 ���� �� ���
		}	
	}
	else if (20 <= a && a <= 99)		// 20 �̻� 99 ������ ������ ���� ���� //
	{
		
		switch (a / 10 % 10)			/*���� �ڸ���*/
		{
		case 2:							//���� �ڸ����� 2�� ��� ���� �� ���
			printf("twenty"); break;
		case 3:							//���� �ڸ����� 3�� ��� ���� �� ���
			printf("thirty"); break;
		case 4:							//���� �ڸ����� 4�� ��� ���� �� ���
			printf("forty"); break;
		case 5:							//���� �ڸ����� 5�� ��� ���� �� ���
			printf("fifty"); break;
		case 6:							//���� �ڸ����� 6�� ��� ���� �� ���
			printf("sixty"); break;
		case 7:							//���� �ڸ����� 7�� ��� ���� �� ���
			printf("seventy"); break;
		case 8:							//���� �ڸ����� 8�� ��� ���� �� ���
			printf("eighty"); break;
		case 9:							//���� �ڸ����� 9�� ��� ���� �� ���
			printf("ninety");
		}
		
		switch (a % 10)					/*���� �ڸ���*/
		{
		case 1:							//���� �ڸ����� 1�� ��� ���� �� ���
			printf("-one"); break;
		case 2:							//���� �ڸ����� 2�� ��� ���� �� ���
			printf("-two"); break;
		case 3:							//���� �ڸ����� 3�� ��� ���� �� ���
			printf("-three"); break;
		case 4:							//���� �ڸ����� 4�� ��� ���� �� ���
			printf("-four"); break;
		case 5:							//���� �ڸ����� 5�� ��� ���� �� ���
			printf("-five"); break;
		case 6:							//���� �ڸ����� 6�� ��� ���� �� ���
			printf("-six"); break;
		case 7:							//���� �ڸ����� 7�� ��� ���� �� ���
			printf("-seven"); break;
		case 8:							//���� �ڸ����� 8�� ��� ���� �� ���
			printf("-eight"); break;
		case 9:							//���� �ڸ����� 9�� ��� ���� �� ���
			printf("-nine");
		}
	}
	else								// �׿� ������ ���� ���� //
		printf("none");					// none���� ���� �� ���

	return 0;						//���α׷� ���� ����
}