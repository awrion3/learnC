#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int M, N, ms[20][20], ns[20][20], i, j, k, p;
	int mi, mj, res = 0;

	scanf("%d%d", &M, &N);

	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
			scanf("%d", &ms[i][j]);

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &ns[i][j]);

	/**/
	for (i = 0; i < N; i++)			  //시작점 찾는 용도	
		for (j = 0; j < N; j++)		  //시작점 찾는 용도
		{
		
			if (ns[i][j] == ms[0][0] && i + M <= N && j + M <= N)	//한 시작점이 M의 것과 같을 때, 기준으로 삼아서,
			{						 //단 증가한 인덱스 값이 범위내에 있어야 함에 주의//
				mi = 0; mj = 0;				//각 시작점마다 초기화//
				for (k = i; k < i + M; k++) //행 하나씩 증가,
				{
					mj = 0; //mj의 경우 인덱스 초기화 필요!//
					for (p = j; p < j + M; p++)	//행 하나 증가 전, 열 차례로 증가하며 비교
						if (ns[k][p] == ms[mi][mj])		//ms의 인덱스는 kp와 별개로 계산..
							mj++; //같을 시 증가하여 비교 계속
					mi++; //다음 행 비교를 위해 증가
				}

				//참고로 실제 인덱스는 각각 0 ~ M - 1임//
				if (mi == M && mj == M)	//최종까지 M 범위 인덱스 도달하면 시작점으로 인정> 출력
				{
					printf("%d %d\n", i, j);
					res = 1;	//최소 한 시작점 존재 확인//
				}
			}
		}
			
	if (res == 0)
		printf("none");

	return 0;
}
// 2 4
// 1 1
// 1 1
// 3 2 1 1 
// 0 1 1 1
// 7 1 1 3
// 1 1 0 1
