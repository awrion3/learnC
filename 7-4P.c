#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int a[10], i, j, c[3] = { 0 };	//int형 변수 선언

	for (i = 0; i < 10; i++)	//for문 배열 접근
	{
		scanf("%d", &a[i]);		//배열에 값 입력
		
		if (a[i] == 1)		//입력된 값이 1인 경우
			++c[0];				//c[0]에 누적
		if (a[i] == 2)		//입력된 값이 2인 경우
			++c[1];				//c[1]에 누적
		if (a[i] == 3)		//입력된 값이 3인 경우
			++c[2];				//c[2]에 누적
	}

	for (i = 0; i < 3; i++) {	//별표 출력하기
		printf("%d:", i + 1);	//1: 2: 3: 출력
		for (j = 0; j < c[i]; j++) //저장된 개수만큼
			printf("*");		   //* 출력
		printf("\n");			//줄바꿈 출력
	}
	
	return 0;		   //프로그램 정상 종료//
}