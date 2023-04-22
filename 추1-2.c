#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	double F, N, gap, mnp, num; //double형 변수 선언

	scanf("%lf", &F); //첫 숫자 입력

	/*첫, 두 번째 수*/
	scanf("%lf", &N); //가까운 수 입력1

	gap = F - N > 0 ? F - N : -(F - N); //가까운 정도 확인

	mnp = gap; //최소 가까운 정도 초기화//
	num = N;   //가장 가까운 수 초기화//

	scanf("%lf", &N); //가까운 수 입력2

	gap = F - N > 0 ? F - N : -(F - N); //가까운 정도 확인

	if (gap < mnp) { //주어진 조건 만족 시
		mnp = gap;    //최소 가까운 정도 변동
		num = N;      //가장 가까운 수 변동
	}

	/*세 번째 수부터*/
	while (N > 1.0) { //1.0 이하 수 입력 시 반복 종료
		scanf("%lf", &N); //가까운 수 입력3 

		gap = F - N > 0 ? F - N : -(F - N); //가까운 정도 확인

		if (gap < mnp && N > 1.0) { //주어진 조건 만족 시
			mnp = gap; //최소 가까운 정도 변동
			num = N;  //가장 가까운 수 변동
		}
	}
	printf("%.2f", num); //가장 가까운 수를 소수점 둘째자리까지 출력

	return 0; //프로그램 정상 종료
}