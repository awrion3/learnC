#pragma warning(disable:4996) //scanf()로 인한 오류 해제
#include <stdio.h>

int main(void) {

	int N, i, num, j, flg, cnt = 0; //변수 선언 및 초기화

	scanf("%d", &N); //정수 N 입력
	for (i = N; i >= 1; i--) { //N회 반복
		scanf("%d", &num); //N개의 양의 정수 num 입력

		flg = 1; //소수라 가정
		for (j = 2; j < num; j++) //2 이상 num 미만의 수로 나누어떨어지면,
			if (num % j == 0)
				flg = 0; //소수가 아님

		if (flg == 1 && num > 1) //소수에 해당될 경우,
		{
			printf("%d ", num); //소수 출력
			cnt++; //연속적으로 소수가 나오는 경우 확인
		}
		else { //소수가 아닌 경우,
			if (cnt > 0) //이전까지 소수가 이어서 나온 구간이 있다면,
				printf("*\n"); //출력 양식//
			cnt = 0; //연속 누적 회수 초기화
		}

		if (cnt > 0 && i == 1) //더 이상 입력받지 않고, 이전까지 소수가 이어져 나왔다면,
			printf("*\n"); //출력 양식//
	}

	return 0; //프로그램 정상 종료
}