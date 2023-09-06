#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct complex {
	double real, imag;
};

//함수 선언
struct complex add(struct complex, struct complex);

//참고로 구조체의 경우에도, 함수 선언 전에 struct complex; 만 선언하고,
//함수 선언 후에 정의할 수 있다 (함수와 달리 정의가 메인함수 전에 있어야 함)

int main(void) {

	struct complex a, b, c;	//구조체 변수 선언

	scanf("%lf%lf", &a.real, &a.imag);	//구조체 멤버별 값 입력
	scanf("%lf%lf", &b.real, &b.imag);

	c = add(a, b);	//함수 호출 및 반환값 구조체 대입

	printf("%.1f + %.1fi", c.real, c.imag);	//구조체 멤버 값 형식에 맞게 출력

	return 0;
}

//함수 정의
struct complex add(struct complex a, struct complex b) {

	struct complex c;

	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;

	return c;
}