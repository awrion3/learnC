#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	unsigned int a, b, c, d, r = 0;
	
	scanf("%u%u%u%u", &a, &b, &c, &d);

	//각 정수에 대해
	r |= a << 24;	//8 bit 자리수 이동시키기 및
	r |= b << 16;	//연산자 우선순위에 유의//
	r |= c << 8; 
	r |= d;			//합쳐가기
	
	printf("%u", r);
	
	return 0;
}
