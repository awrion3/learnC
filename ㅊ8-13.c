#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int count_3(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N;
	scanf("%d", &N);

	/*���� �� ��� �� ���*/
	printf("%d", count_3(N));

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int count_3(int x) {

	int n, v, cnt = 0;

	for (int i = 1; i <= x; i++)
	{
		n = i; //
		while (n != 0)
		{
			v = n % 10;
			if (v == 3)
				cnt++;

			n /= 10;
		}
	}

	return cnt;
}