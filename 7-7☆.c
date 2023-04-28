#pragma warning (disable:4996)  //scanf() 함수 오류 해결//
#include <stdio.h>				//표준입출력 관련 헤더 파일//

int main (void) {               //main() 함수//

	int a[10], i, j, f[10] = { 0 };	//int형 배열 선언 및 초기화

	for (i = 0; i < 10; i++)        //for문을 통한 배열 값 입력
		scanf("%d", &a[i]);

	for (i = 0; i < 10; i++)		//for문을 통한 배열 접근
	{
		for (j = i; j < 10; j++)         //배열의 한 원소에 대해
			if (i != j && a[i] == a[j])  //다른 원소들의 값 비교
				f[j] = 1;				  //중복 시, 중복 확인한 값 배열 f에 저장
	}

	for (j = 0; j < 10; j++)	  //for문을 통한 배열 접근
		if (f[j] == 0)			   //배열 f를 참고하여 중복 제외하고
			printf(" %d", a[j]);   //배열 a에 저장된 값들 출력하기

	return 0;				    //프로그램 정상 종료//
}