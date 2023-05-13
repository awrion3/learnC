#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

//함수 선언//
int add_digits(int);

//main 함수//
int main(void) {

	/*변수 선언 및 값 입력*/
	int N, num, min, mnum, fl = 0;  //지역변수 선언 및 초기화
	scanf("%d", &N);		//첫 값 입력//

	/*변수 값 계산 및 출력*/
	while (N >= 0) {		//종료 조건 시까지 반복//

		num = N;			//N 값 저장//
		while (add_digits(num) > 9) {	 //합이 한 자리수가 되면 반복 종료
			num = add_digits(num);		 //함수 호출하여 얻은 반환값을 N에 다시 대입
		}

		if (fl == 0) {	//처음만 초기화
			min = add_digits(num);	 //min 값 초기화//
			mnum = N;				 //mnum 값 초기화//
			fl = 1;		//이후 안함
		}

		if (min > add_digits(num))	//가장 작은 디지털근 구하기
		{
			min = add_digits(num);	//디지털근의 값 갱신
			mnum = N;				//디지털근이 가장 작은 정수 갱신
		}

		scanf("%d", &N);	//새 값 입력//
	}

	printf("%d %d", mnum, min); //디지털근이 가장 작은 정수 및 디지털근의 값 출력

	return 0;		   //프로그램 정상 종료//
}

//함수 정의//
int add_digits(int N) {		//인자 하나, 반환값 int형

	int sum = 0;			//지역변수 선언 및 초기화

	while (N != 0) {	//조건 만족할 동안 반복
		sum += N % 10;	//각 자리수 더하기
		N /= 10;		//자리수 이동
	}

	return sum;				//반환값: 각 자릿수의 합
}