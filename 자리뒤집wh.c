#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, n;
	int V = 0, x = 1000; /* 뒤집은 값을 구하기 위한 변수 V 및 자리수 뒤집기를 위한 제어 변수 x */
	scanf("%d", &N);

	n = N; /* 주의 : 아래서 N값이 0이 되며 끝나버린다는 것에 대비 */
	while (N != 0) {
		V += (N % 10) * x; //자리수 구하기 및 뒤집은 자리수를 더하기
		N /= 10;		   //자리수 하나씩 떼어내기
		x /= 10;		   //뒤집은 자리수 맞추어가기
	}
	printf("%d\n", (n > V ? n - V : -(n - V))); // printf()문을 안에 쓸 때는 마지막에만 ;
	printf("%d%d", n, V); //뒤집기 전과 후 나란히 붙여 출력

	return 0;
}