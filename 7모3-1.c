#pragma warning (disable:4996) //scanf() 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {			   //main() 함수//

	/*변수 선언*/
	int N, X[100], idx = 0, num; //배열 X 관련 변수 선언 및 초기화
	int i, cnt, max;			 //부분 배열 관련 변수 선언

	/*배열 X 값 저장*/
	scanf("%d", &N);			//정수 N 입력

	for (i = 0; i < N; i++)		//N개의 정수 입력
	{
		scanf("%d", &num);		//정수 입력받아
		X[idx++] = num;			//배열 X에 저장
	}

	/*부분 배열 최대 크기 계산*/
	cnt = 1; max = 1;				//배열 크기 및 최대 배열 크기 초기화
	for (i = 0; i < idx - 1; i++)	//인덱스 범위 고려하여 배열 X 접근
		if (X[i] * X[i + 1] < 0)	//음수-양수 혹은 양수-음수 패턴 확인
		{
			cnt++;					//부분 배열이면, 크기 계산 누적
			if (max < cnt)			//현재 크기가 최대 크기보다 크다면,
				max = cnt;			//부분 배열 최대 크기 갱신//
		}
		else						//부분 배열이 아니면,
			cnt = 1;				//크기 계산 초기화//

	/*부분 배열 최대 크기 출력*/
	printf("%d\n", max);

	return 0;				   //프로그램 정상 종료//
}