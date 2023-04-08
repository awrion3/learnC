#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N; //연도를 
	char y; /*출력하기 위한 변수 선언(이때 char와 int는 메모리 공간의 크기 차지만, 그래도 char로*/
	scanf("%d", &N); //입력받고

	y = !(N % 4) ? 'L' : 'C'; //4로 
	y = !(N % 100) ? 'C' : y; //100으로 
	y = !(N % 400) ? 'L' : y; //400으로

	printf("%c", y); /*변수 값의 자료형을 잘 보존하여 출력하는 서식으로 지정할 것*/

	return 0;
}