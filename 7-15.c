#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int i, j, flag;		//int형 변수 선언
	char C[10];			//char형 배열 선언

	for (i = 0; i < 10; i++)  //for문으로 배열 접근
		scanf("%c", &C[i]);	  //배열 C에 문자 저장

	for (i = 0; i < 10; i++)	   //for문으로 한 원소에 대해
	{
		flag = 0;	    	//중복 확인 초기화
		for (j = 0; j < 10; j++)   //for문으로 다른 원소들 비교
			if (i != j && C[i] == C[j]) //자신이 아닌 다른 원소 중 중복 존재 확인
				flag = 1;   //원소 C[i]의 중복 확인 시 표기

		if (flag == 0)		     //해당 원소의 중복이 없을 시,
			printf(" %c", C[i]); //해당 원소 출력하기
	}

	return 0;		   //프로그램 정상 종료//
}