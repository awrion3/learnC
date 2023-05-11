#pragma warning (disable:4996) //scanf() 관련 오류 해제
#include <stdio.h>

/*함수 선언*/
int sum(int);

/*main 함수*/
int main(void) {

	//변수 선언 및 초기화, 입력//
	int N, i, res = 0;
	scanf("%d", &N);

	//변수 값 계산, 출력//
	for (i = 1; i <= N; i++)
		res += sum(i);		 //sum() 함수 호출

	printf("%d", res);

	return 0;		//프로그램 정상 종료
}

/*함수 정의*/
int sum(int n) {	//인자 하나, int형 반환값

	return (n * (n + 1)) / 2; //공식 적용한 값 반환
}