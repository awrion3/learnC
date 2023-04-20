#pragma warning (disable : 4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, i, fac = 1; //변수 선언 및 초기화

	do {
		scanf("%d", &N); //N 입력

		fac = 1; //factorial 초기화
		for (i = 1; i <= N; i++) //N의 factorial 찾기
			fac *= i; //factorial 구하기
		
		if (N != 0) //0일 시 출력 제외
			printf("%d\n", fac); //factorial 출력 및 줄바꿈

	} while (N != 0); //0 입력시 반복 종료

return 0; //프로그램 정상 종료
}