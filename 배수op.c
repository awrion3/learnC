#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N; //양의 정수 한개를
	int a; /*출력을 위한 변수 a의 선언*/

	scanf("%d", &N); //입력 받는다.

	a = !(N % 3) * 3 + !(N % 5) * 5; //입력 받은 수가 3의 배수면 3, 5의 배수면 5, 둘 다면 8 
	a += (!(N % 3) && !(N % 5)) * 7; //입력 받은 수가 15의 배수(둘 다)면 +7하여 15로 정정
	a += (N % 3 && N % 5) * N; //여태 계속 0인 경우(둘 다 아닐 시) 본래 N값으로 정정
	printf("%d is a multiple of %d.", N, a);

	return 0;
}