#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>			   //표준입출력 관련 헤더 파일

int main(void) {	//main() 함수//

	int N, V, X[10] = { 0 };    //변수 선언 및
	int i = 0, cnt = 0, M = 0;  //변수 초기화

	scanf("%d", &N); //반복 횟수 입력

	while (N != 0) { //N회 반복
		scanf("%d", &V);  //정수 입력

		X[i] = V; //입력한 정수 배열에 저장

		N--; //N회 반복 제어
		i++; //인덱스 변경

		cnt++; //입력 횟수 확인
	}

	for (i = 0; i < cnt; i++) { //for문을 사용하여 배열 접근
		M *= 10;		//자리수 이동하기
		M += X[i];		//각 자리수 더하기
	}

	printf("%d", M); //배열 X에 저장된 정수들로 이루어진 정수 M 출력

	return 0;		 //프로그램 정상 종료//
}