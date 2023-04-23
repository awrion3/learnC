#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)//
	
	/*변수의 선언 및 초기화*/
	int N, M;

	/*변수의 값 입력*/
	scanf("%d", &N);

	/*변수의 값 계산*/
	do {	
		scanf("%d", &M);

		if (N < M)
			printf("DOWN\n");
		else if (N > M)
			printf("UP\n");
		else
			printf("RIGHT\n");

	} while (N != M);
	
	/*변수의 값 출력*/

	return 0; //main() 함수의 끝: 프로그램의 정상 종료//
}