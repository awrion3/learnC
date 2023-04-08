#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, i, j;
	scanf("%d", &N); //정수를 입력받아,

	for (i = 0; i < N; i++) //공백 조정 출력
		printf("   ");

	for (j = 1; j <= 31; j++) {
		printf("%3d", j);   //플래그 써서 출력
		if ((N + j) % 7 == 0) //줄바꿈 간격 조정
			printf("\n");
	}

	return 0;
}