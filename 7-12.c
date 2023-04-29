#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>			   //표준입출력 관련 헤더 파일

int main(void) {			   /*main() 함수*/

	int i, j, cnt, k[10] = { 0 };   //int형 변수 선언
	double x[10];		            //double형 배열 선언

	for (i = 0; i < 10; i++)	//for문을 통해
		scanf("%lf", &x[i]);	//배열의 원소 실수값 입력

	for (i = 0; i < 10; i++)       //배열의 한 원소를
	{
		cnt = 0;				 //카운트 초기화
		for (j = 0; j < 10; j++)	//다른 원소들과 비교하여
			if (x[i] > x[j])		//자신보다 작은 실수값의
				k[i] = ++cnt;	 //개수 카운트해서 배열 k에 저장
	}

	for (i = 0; i < 10; i++)	 //for문으로 배열 접근
		printf(" %d", k[i]);	 //배열 k의 각 원소 값 출력

	return 0;					/*프로그램 정상 종료*/
}