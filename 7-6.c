#pragma warning (disable: 4996) //scanf() 함수의 오류 해제
#include <stdio.h>				//표준입출력 관련 헤더 파일

int main (void) {			       //main() 함수

	int a[10], i, j, cnt, s[10];   //int형 배열 [크기 10]
	
	for (i = 0; i < 10; i++)       //for문을 사용한 배열 접근
		scanf("%d", &a[i]);        //scanf()로 배열 값 입력

	for (i = 0; i < 10; i++)       //for문을 사용한 배열 접근
	{
		cnt = 0;				   //cnt 초기화
		for (j = 0; j < 10; j++)   //for문을 사용한 배열 접근
			if (a[i] < a[j])	   //조건 만족 시
				cnt++;			   //cnt 변동	
		s[i] = cnt;				   //cnt값 배열 s에 저장
	}

	for (i = 0; i < 10; i++)	   //for문을 사용한 배열 접근
		printf(" %d", s[i]);	   //배열 출력

	return 0;				    //프로그램 정상 종료
}