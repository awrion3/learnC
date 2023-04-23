#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)

	/*변수의 선언 및 초기화*/
	int N, i, j, k;

	/*변수의 값 입력*/
	scanf("%d", &N);

	/*변수의 값 계산*/
	for (i = 1; i <= N; i++) {

		for (j = N - i; j >= 1; j--)
			printf(" ");

		k = i;
		for (j = 1; j <= i * 2 - 1; j++)
		{
			if (j < i)
			{
				printf("%d", k--);
			}
			else if (j > i)
			{
				printf("%d", ++k);
			}
			else {
				k = 1;
				printf("%d", k);
			}
		}
		printf("\n");
	}

	for (i = N - 1; i >= 1; i--) {

		for (j = 1; j <= N - i; j++)
			printf(" ");

		k = i;
		for (j = i * 2 - 1; j >= 1; j--)
		{
			if (j > i)
			{
				printf("%d", k--);
			}
			else if (j < i)
			{
				printf("%d", ++k);
			}
			else {
				k = 1;
				printf("%d", k);
			}
		}
		printf("\n");
	}

	/*변수의 값 출력*/

	return 0;   //main() 함수의 끝: 프로그램의 정상 종료
}