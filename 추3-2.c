#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, i, sum = 0, val = 0; //변수 선언 및 초기화

	scanf("%d", &N); //변수 값 입력

	for (i = 1; i <= N; i++) { //N의 약수 구하기
		if (N % i == 0) //약수일 경우,
			sum += i;   //약수의 합 구하기
	}
	
	do {
		val *= 10; //자리수 이동
		val += sum % 10; //한 자리씩 더하기
		sum /= 10; //한 자리씩 분리하기

	} while (sum != 0); //조건 검사 결과가 거짓일 시 반복 종료	
	
	printf("%d", val); //약수합의 역순 출력

	return 0; //프로그램 정상 종료
}