#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	/*선언*/
	int M, N, S[20][20], m, n;		//행 i는 P ~ M 범위
	int i, P, j, K, turn, cnt = 0;	//열 j는 K ~ N 범위
	
	/*입력*/
	scanf("%d%d", &M, &N); //여기선 인덱스 자체 값 입력임에 유의
	m = M; n = N;

	/*계산*/
	P = 0; K = 0; 
	turn = 1;

	while ( cnt <= (m + 1) * (n + 1) ) //사실 맨 아래 break문으로 인해 없어도 됨
	{
		if (turn == 1) { 			// turn 1: 열 j가 증가하는 경우 //

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
		else if (turn == 2) {		// turn 2: 행 i가 증가하는 경우 //

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
		else if (turn == 3) {		// turn 3: 열 j가 감소하는 경우 //
	
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
		else if (turn == 4) {		// turn 4: 행 i가 감소하는 경우 //
	
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

		//cnt 원소 개수가 행*열 곱한 수와 일치할 시, turn에 들어가지 않고 반복 중단
		if (cnt == (m + 1) * (n + 1))				//값 덮어씌움 방지
			break;
	}

	/*출력*/
	for (i = 0; i <= m; i++)		//m과 n 사용함에 유의
	{
		for (j = 0; j <= n; j++)
			printf("%d ", S[i][j]);
		printf("\n");
	}

	return 0;
}