#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)//

	/*변수의 선언 및 초기화*/
	int N, sum = 0, max, min; //int) 4 byte = 4*8 bit (2^32)

	/*변수의 값 입력*/
	scanf("%d", &N);	 //1//

	max = N; min = N;	 //3//

	/*변수의 값 계산*/
	while (N != 0) {	 //1//
		sum += N;	 	 //2//

		if (max < N)	 //3//
			max = N;
		if (min > N)	 //3//
			min = N;

		scanf("%d", &N); //1//
	}
	
	/*변수의 값 출력*/
	printf("%d %d %d", sum, min, max);

	return 0; //main() 함수의 끝: 프로그램의 정상 종료//
}