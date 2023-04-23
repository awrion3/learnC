#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)

	/*변수의 선언 및 초기화*/
	int a, b, c, max, i, j, x = 0;

	/*변수의 값 입력*/
	scanf("%d%d%d", &a, &b, &c);

	/*변수의 값 계산*/
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	for (i = 1; i <= max; i++)
	{

		if (max - x > a)
			printf(" ");
		else
			printf("*");
		
		if (max - x > b)
			printf(" ");
		else
			printf("*");
		
		if (max - x > c)
			printf(" ");
		else
			printf("*");
		
		x++;
		
		printf("\n");
	}
		
	/*변수의 값 출력*/

	return 0;   //main() 함수의 끝: 프로그램의 정상 종료
}