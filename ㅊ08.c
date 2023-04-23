#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)

	/*변수의 선언 및 초기화*/
	int N1, N2, i, j, cnt = 0;

	/*변수의 값 입력*/
	scanf("%d%d", &N1, &N2);

	/*변수의 값 계산*/
	for (i = 1; i <= 9; i++) { //겉은 행
		for (j = N1; j <= N2; j++) { //속은 열
			printf("%dX%d=%d ", j, i, j * i);
			cnt++;
		}
		if (cnt % 3 == 0)
			printf("\n");
	}
	
	/*변수의 값 출력*/

	return 0;   //main() 함수의 끝: 프로그램의 정상 종료
}