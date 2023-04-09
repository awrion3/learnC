#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, M, num, i, j;
	int cnt = 0, val = 1, sum = 0; //변수 선언 및 초기화
	int flag = 1, MAX, X, R;

	scanf("%d%d", &N, &M); //두 개의 양의 정수 입력

	for (i = N; i <= M; i++) //N부터 M까지의 숫자 범위의
	{
		num = i; //숫자 i를 num에 대입
		for (j = 2; j <= i; j++) { //각 숫자 i의 약수 j 구하기
			while (!(num % j)) //num이 j로 나누어 떨어지면
			{
				num /= j; //num을 j로 나누어 대입하고
				cnt++;    //카운트 하기
			}

			val *= (cnt + 1); //소인수분해로 약수의 개수 구하기
			sum += cnt; //소인수의 지수 합 구하기

			cnt = 0; //카운트 초기화
		}
		
		if (flag == 1) { //처음 초기화
			X = i; //첫 약수 개수가 가장 큰 수 설정
			MAX = val; //첫 약수 개수 설정
			R = sum; //첫 소인수 지수 합 설정
		}
		flag = 0; //이후 초기화 금지

		if (MAX < val) { //각 수의 약수의 개수 비교하며,
			X = i; //약수 개수 최대값 가진 정수 새롭게 갱신
			MAX = val; //약수 개수 최대값 새롭게 갱신
			R = sum; //해당 정수의 소인수 지수 합 새롭게 갱신
		}

		val = 1; //해당 정수에 대해 계산한 약수의 개수 초기화
		sum = 0; //및 계산한 소인수의 지수 합 초기화
	}
	
	printf("%d %d %d", X, MAX, R); 
	//약수의 개수가 가장 많은 수, 약수의 개수, 소인수의 지수 합 출력
	
	return 0; //프로그램 정상 종료
}