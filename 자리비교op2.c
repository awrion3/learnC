#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int a, b, c;
	int x = 0; //판별자 x 변수 선언 및 초기화

	scanf("%d%d%d", &a, &b, &c);

	a = a / 100 % 10;
	b = b / 100 % 10;
	c = c / 100 % 10;

	x = (a == b) + (b == c) + (a == c); //하나도 안 같으면 0, 하나라도 같으면 1, 둘 이상이면 3 고정.
	x = (x == 3) * 'T' + (x == 1) * 'D' + (x == 0) * 'S';

	printf("%c", x); //정수형에서 문자형으로 바뀌었으나 문자형도 정수형에 속하며, 
					 //(같은 자료형이란, 같은 메모리 크기 내 존재하는 것임.) 서식 지정자에만 유의.
	return 0;
}