#pragma warning (disable : 4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int M, N, i, max; //변수 선언

	scanf("%d%d", &N, &M); //두 수 입력

	do {	
		if (N < M) //M이 더 큰 경우
		{
			for (i = 1; i <= N; i++) //N의 범위에서 
				if (M % i == 0 && N % i == 0) //약수 찾기
					max = i; //최대공약수 찾기
		}
		else //N이 더 큰 경우
		{
			for (i = 1; i <= M; i++) //M의 범위에서
				if (M % i == 0 && N % i == 0) //약수 찾기
					max = i; //최대공약수 찾기
		}
		printf("%d\n", max); //최대공약수 출력
		
		scanf("%d%d", &N, &M); //두 수 입력

	} while (N != 0 && M != 0); //두 수 중 하나 0 입력 시 종료
	
	return 0; //프로그램 정상 종료
}