#pragma warning (disable:4996) //scanf() 함수 관련 오류 해제
#include <stdio.h>

/*함수 선언*/
void print_row1(int);
void print_row2(int);

/*main 함수*/
int main(void) {

	//변수 선언 및 값 입력//
	int N, i;
	scanf("%d", &N);

	//변수 값 계산//
	for (i = 1; i <= N; i++)
		if (i == 1 || i == N)	//첫번째 및 마지막 줄
			print_row1(N);			//print_row1() 함수 호출
		else					//나머지 줄
			print_row2(N);			//print_row2() 함수 호출

	return 0;			//프로그램 정상 종료
}

/*함수 정의*/
void print_row1(int x) {	 //인자 하나, 반환값 없음

	int j;					 //변수 선언

	for (j = 0; j < x; j++)	 //x개 x출력
		printf("%d", x);

	printf("\n");			 //줄바꿈 출력
}

void print_row2(int x) {	 //인자 하나, 반환값 없음 

	int j;					 //변수 선언

	for (j = 0; j < x; j++)
		if (j == 0 || j == x - 1)	//2개 x출력
			printf("%d", x);
		else						//공백 출력
			printf(" ");

	printf("\n");			 //줄바꿈 출력
}