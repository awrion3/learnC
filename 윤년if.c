#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);

	if ((!(N % 4) && N % 100) || !(N & 400)) //4로 나누어 떨어지고 100으론 나누어 떨어지지 않거나,
		printf("L");					     //400으로 나누어 떨어지는 경우,
	else				//그 외는 모두 평년
		printf("C");	/*주의 : 서식 지정자 없이 출력함에 있어 문자도 "" 사용함. */

	return 0;
}