#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int N, d[10] = { 0 }, i;  //int형 변수 선언
	char c[10] = { 0 };       //char형 변수 선언

	scanf("%d", &N); //반복 횟수 입력

	getchar(); //문자는 위에서 입력된 개행 무시를 위해 getchar() 사용
	for (i = 0; i < N; i++) //for문으로 배열 접근
		scanf("%c", &c[i]); //문자 입력 값 배열 c에 저장

	//숫자는 위에서 입력된 개행을 무시
	for (i = 0; i < N; i++) //for문으로 배열 접근
		scanf("%d", &d[i]); //정수 입력 값 배열 d에 저장

	for (i = 0; i < N; i++) //반복 횟수 N
		printf("x[%d%%%d]=x[%d]=%c\n", d[i], N, d[i]%N, c[d[i]%N]);
		//x[정수값 % N값] = x[나머지값] = c[인덱스값]으로 출력

	return 0;		   //프로그램 정상 종료//
}