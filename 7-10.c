#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>			   //표준입출력 관련 헤더 파일

int main(void) {			   /*main() 함수*/

	int i;			        //int형 변수 선언
	double x[10] = {0};	    //double형 배열 선언 및 초기화

	for (i = 0; i < 10; i++)	//for문으로 배열 [크기 10] 접근
		scanf("%lf", &x[i]);	//실수 X를 double형 배열에 저장
	
	for (i = 0; i < 10; i++)	   //for문으로 배열 접근
		if (x[i] > 0)				 //조건 만족 시,
			printf(" %.1f", x[i]);   //소수점 아래 첫째자리까지 출력
	
	return 0;					/*프로그램 정상 종료*/
}