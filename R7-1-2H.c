#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int M1, M2, N;
	int Y[100], X[100];
	int n, idx, tmp;
	int mlg, plg, kdx = 0, is = 0;
	int m1, m2;

	scanf("%d%d", &M1, &M2);
	m1 = M1; m2 = M2;

	scanf("%d", &N);	 ////

	while (N > 0) {		 ////

		//�迭�� �ڸ��� ���� ����
		n = N; idx = 0;
		while (n != 0) {
			Y[idx++] = n % 10;
			n /= 10;
		} 
		//

		//�迭 ���� ����//
		M1 = m1; M2 = m2; ///
		mlg = 0; 
		
		for (int i = 0; i < idx; i++) ///
			if (M1 == i)
			{
				Y[i] = Y[i + 1]; ///
				mlg = 1;
				M1++; //
			}
		if (mlg == 1)
		{
			idx--; ///
			if (m1 < m2) //m1 = 1�̰� m2 = 0�̸�, m2�� ���� �����Ƿ�.
				M2--;  ///
		}
		
		for (int i = 0; i < idx; i++) ///
			if (M2 == i)
			{
				Y[i] = Y[i + 1]; ///
				mlg = 2;
				M2++; //
			}
		if (mlg == 2)
			idx--; ///
		//

		//�迭�� ���� ȸ���� Ȯ��
		plg = 0;
		for (int i = 0; i < idx; i++)
			if (Y[i] == Y[idx - 1 - i])
				plg = 1;
			else
			{
				plg = 0;
				break;
			}
		//

		//ȸ������ �� ����
		if (plg == 1)
		{
			X[kdx++] = N;
			is = 1;
		}
		//

		scanf("%d", &N); ////
	}

	//ȸ���� �迭 �������� ��������
	for (int i = 0; i < kdx - 1; i++)
		for (int j = i + 1; j < kdx; j++)
			if (X[i] < X[j]) {
				tmp = X[i];
				X[i] = X[j];
				X[j] = tmp;
			}

	//��� ��Ŀ� ���߾� ���
	if (is == 0)
		printf("none");
	else
		for (int i = 0; i < kdx; i++)
			printf("%d ", X[i]);

	return 0;
}

/*
1 3
12021 345433 12345 1022201 768833 2334 77907 12321 37773 -1
*/
/*
1 4
12021 345433 12345 1022201 768833 2334 70907 12321 37773 -1
*/