#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	/*����*/
	int M, N, S[20][20], m, n;		//�� i�� P ~ M ����
	int i, P, j, K, turn, cnt = 0;	//�� j�� K ~ N ����
	
	/*�Է�*/
	scanf("%d%d", &M, &N); //���⼱ �ε��� ��ü �� �Է��ӿ� ����
	m = M; n = N;

	/*���*/
	P = 0; K = 0; 
	turn = 1;

	while ( cnt <= (m + 1) * (n + 1) ) //��� �� �Ʒ� break������ ���� ��� ��
	{
		if (turn == 1) { 			// turn 1: �� j�� �����ϴ� ��� //

			i = P;					 //0	  //<1>
			for (j = K; j <= N; j++) //0 - 4  //<1> - <3>
			{
				S[i][j] = ++cnt;

				printf("[(%d, %d) %d]", i, j, cnt);
			}
			if (j == N + 1) //(5) == 4  //(4) == 3
			{
				P++;		//<1>	    //[2]
				turn = 2;

				printf("\n");

			}
		}
		else if (turn == 2) {		// turn 2: �� i�� �����ϴ� ��� //

			j = N;					 //4	  //<3>
			for (i = P; i <= M; i++) //1 ~ 3  //[2]
			{
				S[i][j] = ++cnt;

				printf("[(%d, %d) %d]", i, j, cnt);
			}
			if (i == M + 1) //(4) == 3	 //(3) == 2	
			{
				N--;		//<3>		 //{2}
				turn = 3;

				printf("\n");
			
			}
		}
		else if (turn == 3) {		// turn 3: �� j�� �����ϴ� ��� //
	
			i = M;					 //3	  //<2>
			for (j = N; j >= K; j--) //3 - 0  //{2} - <1>
			{
				S[i][j] = ++cnt;

				printf("[(%d, %d) %d]", i, j, cnt);
			}
			if (j + 1 == K) //(-1) == 0   //(0) == 1
			{
				M--;		//<2>		  //{1}.
				turn = 4;

				printf("\n");
			
			}
		}
		else if (turn == 4) {		// turn 4: �� i�� �����ϴ� ��� //
	
			j = K;					 // 0	  
			for (i = M; i >= P; i--) //<2> ~ <1>  
			{
				S[i][j] = ++cnt;

				printf("[(%d, %d) %d]", i, j, cnt);
			}
			if (i + 1 == P)	//(-1) == 0
			{
				K++;		//<1>
				turn = 1;

				printf("\n");
			}
		}

		//cnt ���� ������ ��*�� ���� ���� ��ġ�� ��, turn�� ���� �ʰ� �ݺ� �ߴ�
		if (cnt == (m + 1) * (n + 1))				//�� ����� ����
			break;
	}

	/*���*/
	for (i = 0; i <= m; i++)		//m�� n ����Կ� ����
	{
		for (j = 0; j <= n; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}

	return 0;
}