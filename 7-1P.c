#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int x[5], i, sum = 0, avg; //배열 및 변수 선언

	for (i = 0; i < 5; i++)    //for문으로 배열 접근
	{
		scanf("%d", &x[i]);		//배열에 값 저장
		sum += x[i];			//값들 더하기
	}

	avg = sum / 5;			   //값들의 평균 구하기

	for (i = 0; i < 5; i++)	   //for문으로 배열 접근
		if (x[i] > avg)			 //평균보다 큰 정수값일 시,
			printf("%d\n", x[i]);  //해당 원소 출력하기

	return 0;		   //프로그램 정상 종료//
}