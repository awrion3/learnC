#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)//

	/*변수의 선언 및 초기화*/
	int N, M, max, sax;

	/*변수의 값 입력*/
	scanf("%d", &N);
	scanf("%d", &M);

	max = M; sax = M; //초기화//

	N--; //첫번째 M 입력에 대한 N의 반복 제어

	/*변수의 값 계산*/
	while (N > 0) { //반복 조건
		
		if (max < M)      //M이 max보다 큰 경우
		{
			sax = max;
			max = M;
		}
		else if (sax < M)  //M이 max보다 작거나 같지만, sax보다는 큰 경우
			sax = M;

		scanf("%d", &M);

		N--;		//반복 제어
	}

	/*변수의 값 출력*/
	printf("%d\n%d", max, sax);

	return 0; //main() 함수의 끝: 프로그램의 정상 종료//
}