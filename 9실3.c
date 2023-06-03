#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int ar[50] = { 0 }, N, cnt = 0;
	int *p = ar; //포인터 선언 및 연결

	scanf("%d", &N);

	for (p = ar; p < ar + N; p++) //주소로 배열 접근
		scanf("%d", p); //&ar[0]...

	for (p = ar; p < ar + N; p++)
		if (*p == 0)	//참조한 값이 0이면 반복 종료
			break;
		else
			cnt++;		//0이 아니면 개수 누적

	printf("%d", cnt);

	return 0;
}
//5
//0 1 3 -2 -4