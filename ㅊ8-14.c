#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int is_prime(int);
int next_prime(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N, M, pnt = 0; //
	scanf("%d%d", &N, &M);

	/*���� �� ��� �� ���*/
	for (int i = N + 1; ; i++)
	{
		if (next_prime(i) != 0)
		{
			printf("%d ", next_prime(i));
			pnt++;
		}
		if (pnt == M) //
			break;
	}

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int is_prime(int x) {

	int isp = 1;

	for (int i = 2; i < x; i++)
		if (x % i == 0)
			isp = 0;

	return isp;
}

int next_prime(int x) {

	if (is_prime(x) == 1)
		return x;
	else
		return 0; //
}

