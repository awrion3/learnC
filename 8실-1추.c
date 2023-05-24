#pragma warning(disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

void order(int, int, int);		//함수 선언

int main(void) {

	int x, y, z;					//변수 선언
	scanf("%d%d%d", &x, &y, &z);	//값 입력

	while (x != 0 && y != 0 && z != 0) { //조건 만족할 동안 반복
		order(x, y, z);	//함수 호출

		scanf("%d%d%d", &x, &y, &z);	//값 입력
	}
	
	return 0;
}

void order(int x, int y, int z) {	//함수 정의

	int max = x, min = x, mid = x; //지역 변수 선언

	if (max < y)	//최대값 y
		max = y;
	if (max < z)	//최대값 z
		max = z;

	if (min > y)	//최소값 y
		min = y;
	if (min > z)	//최소값 z
		min = z;

	if (y != max && y != min) //중간값 y
		mid = y;
	if (z != max && z != min) //중간값 z
		mid = z;

	printf("%d %d %d\n", max, mid, min); //최대 중간 최소값 출력
}