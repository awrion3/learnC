#pragma warning (disable:4996)
#include <stdio.h>

//0 선언
void update_max(int);
int max1, max2;

int main(void) {
	
	int N, tmp;

	scanf("%d", &N);
	max1 = N;

	scanf("%d", &N);	//최소 두번은 입력받는다 하였음
	max2 = N;

	if (max1 < max2) { //사실 없더라도 아래 호출서 해결됨.
		tmp = max1;	   //max2 값이 0이면, 튕겨도 문제없고.
		max1 = max2;
		max2 = tmp;
	}

	//
	while (N != 0) {
		update_max(N);

		scanf("%d", &N);
	}

	printf("%d %d", max1, max2);

	return 0;		  

}

//1 정의
void update_max(int x) {

	if (max1 < x) {
		max2 = max1;
		max1 = x;
	}
	else if (max2 < x)
		max2 = x;
}
//22 -81 33 27 45 -23 0
//22 45 33 27 45 -23 0
