#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	/*선언*/
	int M, N, S[20][20], i, j;
	int m1, m2, n1, n2, tmp;

	/*입력*/
	scanf("%d%d", &M, &N);

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &S[i][j]);

	scanf("%d%d", &m1, &n1);
	scanf("%d%d", &m2, &n2);

	/*계산*/
	if (m1 < m2) //행의 인덱스만으로 구분하면 됨
	{
		for (i = m1; i <= m2 / 2; i++) //교환은 한번씩만 일어나야 함! (행 이동 절반까지만 가야됨)
			for (j = n1; j <= n2; j++)
			{
				tmp = S[i][j];
				S[i][j] = S[m1 + m2 - i][n1 + n2 - j]; //교환 쌍 규칙찾기
				S[m1 + m2 - i][n1 + n2 - j] = tmp;
			}
	}
	else
	{
		for (i = m2; i <= m1 / 2; i++) //=은 m1 등의 값이 인덱스이기 때문인 동시에, / 2를 했기 때문에 사용
			for (j = n2; j <= n1; j++)
			{
				tmp = S[i][j];
				S[i][j] = S[m1 + m2 - i][n1 + n2 - j];
				S[m1 + m2 - i][n1 + n2 - j] = tmp;
			}

	}

	/*출력*/
	for (i = 0; i < M; i++)
	{	for (j = 0; j < N; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}

	return 0;
}