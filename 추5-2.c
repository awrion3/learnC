#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, v = 0, i, j, isp; //변수 선언 및 초기화

	scanf("%d", &N); //양의 정수 N 입력

	do { 
		v *= 10;     //자리수 이동
		v += N % 10; //자리수 역순 구하기
		N /= 10;     //자리수 분리
	} while (N != 0); //조건 만족할 동안 반복

	for (i = 2; i <= v; i++) //해당 범위 내에서
	{
		isp = 1; //소수로 가정
		for (j = 2; j < i; j++) //소수 찾기
			if (i % j == 0)
				isp = 0; //나누어떨어지는 경우 존재할 시 소수가 아님.
	
		if (isp == 1) //해당 범위 내의 수가 소수일 시,
			printf(" %d", i); //소수 출력하기
	}

	return 0; //프로그램 정상 종료
}