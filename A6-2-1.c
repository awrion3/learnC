#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, M, i, j, cnt, flag = 1, max, num; //변수 선언 및 초기화

	scanf("%d%d", &N, &M); //N과 M을 입력 받기

	for (i = N; i <= M; i++) { //N부터 M까지의 숫자 변화
		cnt = 0; //각 숫자에 대한 약수 개수 초기화

		for (j = 1; j <= i; j++) { //각 숫자에 대해 약수 확인
			if (!(i % j))  //나누어 떨어질 시
				cnt++; //약수 개수 누적

			if (flag == 1) //처음 초기화
			{
				max = cnt; //max 값을 첫 숫자의 약수 개수로 초기화
				num = i; //첫 숫자로 초기화
			}
			flag = 0; //이후 초기화 안함

			if (max < cnt) { //해당 숫자의 약수 개수가 더 많을 시 (같을 시 불변)
				max = cnt; //max 값을 변경하고 
				num = i; //해당 숫자로 변경
			}
		}
	}
	printf("%d %d", num, max); //약수의 개수가 가장 많은 수 및 그 개수 출력

	return 0; //프로그램 정상 종료
}