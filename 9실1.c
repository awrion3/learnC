#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	//변수 선언
	int x, y, z;
	int *px, *py, *pz, *tmp;

	//포인터 연결
	px = &x;
	py = &y;
	pz = &z;

	//변수 값 입력
	scanf("%d%d%d", px, py, pz);

	//주소 값 이동
	tmp = pz;
	pz = py;
	py = px;
	px = tmp;

	//포인터 참조하여 값 출력
	printf("%d %d %d", *px, *py, *pz);

	return 0;
}