#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char X[100], ch, Y[100], Z[100];
	int idx = 0, fl, ldx = 0, M, j, zdx;

	scanf("%c", &ch);

	while (ch != '!') {

		X[idx++] = ch;

		scanf("%c", &ch);
	}

	scanf("%d", &M);
	getchar();

	for (int i = 0; i < M; i++)
		scanf("%c", &Z[i]);

	//
	for (int i = 0; i < idx; i++)
	{
		fl = 1;
		for (int j = 0; j < i; j++)
			if (X[i] == X[j])
				fl = 0;
		//
		if (fl == 1)
			Y[ldx++] = X[i];
	}

	for (int i = 0; i < ldx; i++)
		printf("%c", Y[i]);
	printf("\n");

	//���� �� �ε��� ���ϱ�//
	j = 0; zdx = 0;
	for (int i = 0; i < ldx; i++)
		if (Y[i] == Z[j])
		{
			if (j == M - 1) //j ������ ���� (������ ��ġ)
				zdx = i - M + 1; //�Ųٷ� ���ذ���//

			j++;
		}
		else
			j = 0;

	//��� ���
	if (zdx == 0)
		printf("none");
	else
		printf("%d", zdx);

	return 0;
}
//abcdefgstopabcdefgsssstttop jklmnop!
//abcdeflowerffffooooeeeerrrrstststst!