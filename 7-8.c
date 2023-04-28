#pragma warning (disable:4996)  //scanf() 함수 오류 해결//
#include <stdio.h>				//표준입출력 관련 헤더 파일//

int main(void) {               //main() 함수//

	int N, v;				   //변수 선언 및
	int X[10], i = 0, cnt = 0; //변수 초기화
	
	scanf("%d", &N);		   //변수 값 입력

	while (N != 0) {		   //조건 만족할 동안 반복
		v = N % 10;			   //입력한 값의 각 자리수 구하기

		X[i] = v;			   //각 자리수 배열에 저장

		N /= 10;			   //자리수 이동
		i++;				   //배열 인덱스 이동

		cnt++;				   //실제 자리수가 입력된 횟수 확인	
	}
	
	for (i = 0; i < cnt; i++)  //입력 횟수 고려한 원소까지만 배열 접근
		printf(" %d", X[i]);   //배열 원소의 값 출력

	return 0;				   //프로그램 정상 종료//
}