#pragma warning(disable:4996) //scanf()로 인한 오류 해제
#include <stdio.h>

int main(void) {

	int B = 0, N, n, M = 1, m = 0, flg = 0; //변수 선언 및 초기화

	scanf("%d", &N); //정수 N 입력

	while (N >= B){ //종료 조건까지 반복
		printf("%d", N); //정수 N 출력//
		printf(" ");

		n = N; //정수 N의 값 저장
		while (n != 0) { //정수 N의 각 자리수의 곱 구하기
			M *= n % 10; //곱의 결과 M에 저장 
			n /= 10; //자리수 이동
		}
		printf("%d", M); //곱 M 출력//
		printf(" ");

		while (M != 0) { //M을 역순으로 바꾼 정수 구하기
			m *= 10; //자리수 이동
			if (M % 10 == 0 && flg == 0) //처음에만 해당/
				M /= 10; //M의 1의 자리가 0일 시 제외
			flg = 1; //이후 반영 안함/
			m += (M % 10); //역순으로 바꾼 정수 m에 저장
			M /= 10; //자리수 이동
		}
		printf("%d", m); //역순으로 바꾼 수 m 출력//
		printf(" ");

		printf("%d\n", N - B); //이번 입력 값 - 이전 입력 값 출력//
		B = N; //이전 입력 값 저장
		
		scanf("%d", &N); //새로운 값 N 입력
		M = 1; //정수 M
		m = 0; //역순으로 바꾼 수 m
		flg = 0; //관련 제어 변수 모두 초기화
	}
	printf("End"); //종료 시 출력//
		
	return 0; //프로그램 정상 종료
}