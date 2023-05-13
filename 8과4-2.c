#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

//함수 선언//
int is_prime_number(int);
int count_prime_number(int, int);

//main 함수//
int main(void) {

	/*변수 선언 및 값 입력*/
	int N, num, cnt = 0, max = 0, mnum;	//변수 선언 및 초기화
	scanf("%d", &N);					//변수 N 값 입력

	/*변수 값 계산*/
	for (int i = 0; i < N; i++) {	//N개의 양의 정수 입력
		scanf("%d", &num);			//입력한 양의 정수에 대하여

		if (max < count_prime_number(cnt, num))	//해당 구간 cnt 최대값 구하며 비교
		{
			max = count_prime_number(cnt, num);	//조건 만족시 연속 구간의 cnt 최대값 갱신
			mnum = num;							//해당 구간의 마지막 소수 갱신
		}
		cnt = count_prime_number(cnt, num);	//구간별 cnt 개수 갱신//
	}

	/*변수 값 출력*/
	if (max == 0)			//소수가 하나도 없었으면
		printf("%d", max);	//0 출력
	else							 //그 외의 경우,
		printf("%d\n%d", max, mnum); //연속 구간 최대 길이 및 해당 구간의 마지막 소수 출력

	return 0;		   //프로그램 정상 종료//
}

//함수 정의//
int is_prime_number(int num) {		//인자 하나, int형 반환

	int isp = 1;					  //소수로 가정

	for (int i = 2; i < num; i++)	//해당 수로 
		if (num % i == 0)			//나누어떨어지면
			isp = 0;				  //소수가 아님

	if (num == 1)					//1인 경우
		isp = 0;					  //소수가 아님

	return isp;						//반환값: 소수 판별 결과
}

int count_prime_number(int cnt, int num) {		//인자 둘, int형 반환

	if (is_prime_number(num) && num < 100)		//소수면서 100미만의 정수면,
		return cnt + 1;							  //cnt + 1 반환
	else										//그 외의 경우,
		return 0;								  //0 반환
}