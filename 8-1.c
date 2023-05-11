#pragma warning (disable:4996) //scanf() 관련 오류 해제
#include <stdio.h>

/*함수 선언*/
int add(int, int);

/*main 함수*/
int main(void) {

	//변수 선언 및 초기화, 값 입력//
	int N, sum = 0, val = 1;
	scanf("%d", &N);

	//변수 값 계산//
	while (val <= N) {
		sum = add(val, sum); //add() 함수 호출 및 반환값 대입
		val++;
	}

	//변수 값 출력//
	printf("%d", sum);

	return 0;			//프로그램 종료
}

/*함수 정의*/
int add(int x, int y) { //인자 둘, int형 반환

	return x + y;		//함수 값 반환
}