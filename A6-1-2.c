#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, M, x = 1, i, cnt = 0; //변수 선언 및 초기화
	int flag = 1, max, num;

	scanf("%d", &N); //N개의 정수 입력

	while (x <= N) { //N회 반복해서
		scanf("%d", &M); //정수 M 입력

		printf("%d:", M); //정수 M을 출력

		for (i = 1; i <= M; i++) //정수 M의 약수 구하기
			if (!(M % i)) { //나누어 떨어질 시,
				printf(" %d", i); //약수를 출력하고,
				cnt++; //약수의 개수를 누적 계산
			}

		printf(" %d", cnt); //M의 약수의 개수를 출력

		if (flag == 1) { //처음 초기화
			max = cnt; //max를 처음 입력한 수의 약수 개수로 초기화
			num = M;   //num에 M을 저장하여 초기화
		}
		flag = 0; //초기화 이후 실행 배제

		if (max < cnt) { //새 입력한 값의 약수 개수가 max보다 많을 시
			max = cnt; //새 약수 개수로 max 변동
			num = M; //새 정수로 num 변동
		}
		cnt = 0; //M의 약수의 개수를 초기화

		printf("\n"); //줄바꿈 출력
		
		x++; //N회 만큼 반복하도록 제어
	}

	printf("%d", num); //가장 많은 약수를 갖는 정수 출력

	return 0; //프로그램 정상 종료
}