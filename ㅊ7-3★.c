#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char arr[5], i, j, k, tmp;

	for(i = 0; i < 5; i++)
		scanf("%c", &arr[i]);

	for (k = 0; k < 5; k++)	//출력 5회 반복
	{
		for (j = 0; j < 5; j++)	 //배열 arr 접근하여 출력
			printf("%c", arr[j]);
		printf("\n");

		tmp = arr[4];			 //맨마지막 칸 데이터 저장해두고,
		for (i = 3; i >= 0; i--) //두번째 마지막에서부터 시작해
			arr[i + 1] = arr[i]; //하나씩 우측 방향으로 이동
		arr[0] = tmp;			 //맨마지막 데이터는 첫번째 칸으로 이동
	}
			 
	return 0;
}