#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	char ch, X[100], idx = 0, fl, Y[100], jdx = 0;
	int M;
	char Z[100], kdx, zdx, is = 0;

	//1 �Է�
	scanf("%c", &ch);
	while (ch != '!') {
		X[idx++] = ch;
		scanf("%c", &ch);
	}

	scanf("%d", &M);
	getchar();

	for (int i = 0; i < M; i++)
		scanf("%c", &Z[i]);

	//2 �ߺ�����
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (X[i] == X[j])
				fl = 0;

		if (fl == 1)
			Y[jdx++] = X[i];
	}

	for (int i = 0; i < jdx; i++)
		printf("%c", Y[i]);
	printf("\n");

	//3 ������ġ �ε���
	kdx = 0;
	for (int i = 0; i < jdx; i++)
		if (Y[i] == Z[kdx]) {
			kdx++;
			if (kdx == M) { //kdx ���� ������ ����
				zdx = i; //�� �� �ε��� ����
				is = 1;
			}
		}
		else
			kdx = 0;

	//4 ���
	if (is == 0)
		printf("none");
	else
		printf("%d", zdx - M + 1);

	return 0;
}
//abcdefgstopabcdefgsssstttop jklmnop!
//4
//stop
//abcdeflowerffffooooeeeerrrrstststst!
//6
//flower