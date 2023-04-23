#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)//

	/*변수의 선언 및 초기화*/
	int A, B, C, a, b, c;
	int S, s, gap, hr, mn, sc;

	/*변수의 값 입력*/
	scanf("%d%d%d", &A, &B, &C);
	scanf("%d%d%d", &a, &b, &c);
	
	/*변수의 값 계산*/
	S = A * 60 * 60 + B * 60 + C;
	s = a * 60 * 60 + b * 60 + c;
	
	gap = s - S;

	hr = gap / (60 * 60);
	gap %= (60 * 60);

	mn = gap / 60;
	gap %= 60;

	sc = gap;

	/*변수의 값 출력*/
	printf("%02d:%02d:%02d", hr, mn, sc); //%[0플래그][2출력폭][d자료형]

	return 0; //main() 함수의 끝: 프로그램의 정상 종료//
}