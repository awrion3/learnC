#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int T, N, t, n, b = 0, s = 0, e = 0; //변수 선언 및 초기화

	scanf("%d", &T); //한 자리 정수 T 입력

	N = T; //기준 T 저장

	while (T != 0) { //0이 입력되기 전까지 반복 
		scanf("%d", &T); //한 자리 혹은 여러 자리 정수 입력

		if (T >= 10) { //한 자리 이상일 경우
			n = T; //T를 n에 저장
			while (n != 0) {
				t = n % 10; //한 자리씩 떼어서//

				if (N < t) //기준 N보다 해당 수가 큰 횟수 계산
					b++;
				else if (N > t) //기준 N보다 해당 수가 작은 횟수 계산
					s++;
				else		//기준 N과 해당 수가 같은 횟수 계산
					e++;

				n /= 10; //한 자리씩 줄여나가기//
			}
		}
		else //한 자리수일 경우
		{
			if (N < T) //기준 N보다 입력한 정수가 큰 횟수 계산
				b++;
			else if (N > T) //기준 N보다 입력한 정수가 작은 횟수 계산
				s++;
			else		//기준 N과 입력한 정수가 같은 횟수 계산
				e++;
		} 
	} 

	printf("%d %d %d", e, s - 1, b); //기준에 대해 같거나 작거나 큰 횟수 각각 출력
	//단 입력한 마지막 수가 0인 경우에 대해 계산하게 된 작은 횟수 -1하여 조정
	
	return 0; //프로그램 정상 종료
}