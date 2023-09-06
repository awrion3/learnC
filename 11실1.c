#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct vector {
	int x, y, z;
};

int main(void) {

	//구조체 (지역)변수 선언
	struct vector v1, v2, v3;

	scanf("%d%d%d", &v1.x, &v1.y, &v1.z);
	scanf("%d%d%d", &v2.x, &v2.y, &v2.z);

	v3.x = v1.x * v2.x;
	v3.y = v1.y * v2.y;
	v3.z = v1.z * v2.z;

	//구조체 멤버 변수 값 출력
	printf("%d %d %d\n", v3.x, v3.y, v3.z);
	printf("%d", v3.x + v3.y + v3.z);

	return 0;
}