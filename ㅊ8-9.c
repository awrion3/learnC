#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ���� �� ���� ���� ����/*/
int max1, max2;

void update_max(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N;
	scanf("%d", &N);
	
	max1 = N; //
	max2 = N;
	
	/*���� �� ���*/
	while (N != 0) {

		update_max(N);

		scanf("%d", &N);
	}

	/*���� �� ���*/
	printf("%d %d", max1, max2);

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
void update_max(int x) {

	if (max1 < x)
	{
		max2 = max1;
		max1 = x;
	}
	else //
	{
		if (max2 < x)
			max2 = x;
	}
}