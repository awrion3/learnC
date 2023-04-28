#pragma warning (disable:4996) //scanf() 함수의 오류 해제
#include <stdio.h>			   //표준입출력 관련 헤더 파일

int main(void) {			   //main() 함수

	int a[10], i, max = 0;     //int형 배열 a [크기 10]

	for (i = 0; i < 10; i++)   //for문을 사용한 배열 접근
		scanf("%d", &a[i]);    //scanf()로 배열 값 입력

	for (i = 0; i < 10; i++)   //for문을 사용한 배열 접근
		if (max < a[i])		   //조건 성립 시
			max = a[i];		   //max 값 변경

	printf("%d", max);		   //배열의 max 값 출력

	return 0;				   //프로그램 정상 종료
}