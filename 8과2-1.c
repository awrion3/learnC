#pragma warning(disable:4996)	//scanf() 관련 오류 해제//
#include <stdio.h>				//표준입출력 관련 헤더 파일//

//함수 선언
int max_num(int, int);	//최대값 계산 함수 선언
int min_num(int, int);	//최소값 계산 함수 선언

//main 함수
int main(void) {

	int A[100], num, idx, S, E, tmp, v, max, min;	//지역변수 선언

	scanf("%d", &num);			//첫 양의 정수 입력//

	idx = 0;					//인덱스 초기화//
	while (num != 0) {			//0이 입력될 때까지 반복//
		A[idx++] = num;			//입력된 값 배열에 저장//

		scanf("%d", &num);		//양의 정수 입력//
	}

	scanf("%d%d", &S, &E);		//두 인덱스 입력//

	v = 0;						//변동 값 초기화//
	for (int i = 1; i <= (E - S + 1) / 2; i++) { //각 쌍마다 교환이 한번씩만 일어나도록 반복
		tmp = A[S + v];			//tmp를 활용해
		A[S + v] = A[E - v];	//A[S+..] 값과
		A[E - v] = tmp;			//A[E-..] 값을 교환
		v++;					//값 변동//
	}

	for (int i = 0; i < idx; i++)	//for문으로 배열 A 접근하여
		printf("%d ", A[i]);		//A[S]에서 A[E]까지의 원소 교환하며 갱신된 결과 출력
	printf("\n");					//줄바꿈 출력

	max = A[S]; min = A[S];			   //배열 A의 첫번째 원소로 최대최소값 초기화//
	for (int i = S + 1; i <= E; i++)   //주어진 범위 S부터 E까지 인덱스 내에서 최대최소값 구하기
	{
		max = max_num(A[i], max);	   //두 정수 값을 함수 호출을 통해 비교하여 최대값 갱신
		min = min_num(A[i], min);      //두 정수 값을 함수 호출을 통해 비교하여 최소값 갱신
	}

	printf("%d %d", max, min);		   //최종 최대최소값 출력//

	return 0;	//프로그램 정상 종료//
}

//함수 정의
int max_num(int N1, int N2) {	//인자 정수 N1, N2 //반환값 int형

	int max;    //최대값 관련 지역변수 선언

	if (N1 < N2)	//N2가 더 큰 정수면,
		max = N2;	  //N2을 최대값으로 지정
	if (N2 < N1)	//N1가 더 큰 정수면,
		max = N1;	  //N1을 최대값으로 지정

	return max;	//두 정수 중 최대값 반환
}

int min_num(int N1, int N2) {	//인자 정수 N1, N2 //반환값 int형

	int min;    //최고값 관련 지역변수 선언

	if (N1 < N2)	//N1이 더 작은 정수면,
		min = N1;	  //N1을 최소값으로 지정
	if (N2 < N1)	//N2가 더 작은 정수면,
		min = N2;	  //N2을 최소값으로 지정

	return min;	//두 정수 중 최소값 반환
}