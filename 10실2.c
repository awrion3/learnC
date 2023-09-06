#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

//<stdlib.h>에 선언되어 있는, 시작주소 itoa(num, 배열이름, 진수형태)를 쓰지 않으려면,
//핵심은 ascii 코드에서의 값
//숫자 0~9라는 값을 문자 0~9로 표현하려면 +48을 해야 한다

int main(void) {	

	//int형 변수 선언
	int num;
	//char형 변수 선언
	char rev[10], *pr = rev;  //주의: 이후 삽입될 널문자 크기까지 고려! (0~8 + 1)

	scanf("%d", &num);	//임의의 int형 값 입력

	//int형 값 한 자리씩 분리, char형 배열 원소 포인터로 접근
	for (; num != 0 && pr < rev + 10; num /= 10, pr++) {
		*pr = num % 10 + 48;	//int형 값 + 문자 변환을 위한 값을 = char형 배열의 원소로 대입 
	}

	//문자열로 변환하기 위한 널 문자 마지막에 삽입: 인덱스에 유의
	*pr = '\0';

	//문자열 출력
	printf("%s", rev);

	return 0;
}