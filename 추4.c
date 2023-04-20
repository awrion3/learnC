#pragma warning (disable : 4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, M, V, cnt = 0; //변수 선언 및 초기화

	scanf("%d", &N); //N개의 수 입력

	while (N > 0) { //N회 동안 반복	
		scanf("%d", &M); //수 M 입력
		
		if (cnt == 1) //이전 값 저장 확인
		{
			printf("%d\n", V + M); //이전 값과 이번 값 더한 값 출력
			cnt = 0; //이전 값 확인 초기화
		}

		V = M; //M을 V에 저장
		cnt++; //이전 값 저장 확인

		N--; //반복 회수 제어 변수
	}

	return 0; //프로그램 정상 종료
}