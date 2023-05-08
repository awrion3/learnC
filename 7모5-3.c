#pragma warning (disable:4996)		//scanf() 관련 오류 해결//
#include <stdio.h>				 //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int reverse_num(int);	//문제 1단계 관련 함수 선언
int del_dupnum(int);	//문제 2단계 관련 함수 선언

/*/main 함수/*/
int main(void) {

	int N, M, gap, max = 0, maxN, maxG; //변수 선언 및 초기화

	scanf("%d", &N);	 //첫 정수 N 입력
	
	while (N > 0) {		 //조건 만족시 반복

		M = del_dupnum(reverse_num(N));	//함수 호출 및 
		printf(" %d", M);				//반환값 출력

		gap = N > M ? N - M : M - N;	//정수 N과 M의 차이 절대값 구하기

		if (max < gap) {	//M과의 차이가 가장 큰 입력 정수 N 찾기
			max = gap;		//가장 큰 차이 갱신//

			maxN = N;		//해당 입력 정수 N 저장
			maxG = gap;		//해당 M과의 차이 gap 저장
		}
		
		scanf("%d", &N); //정수 N 입력
	}

	printf("\n%d %d", maxN, maxG);	//차이가 가장 큰 N과 gap 값 출력//

	return 0;						   //프로그램 정상 종료//
}

/*/함수 정의/*/
int reverse_num(int n) { //int형 형식인자 지역변수 n 선언

	int v = 0;			 //reverse_num() 지역변수 v 선언 및 초기화

	while (n != 0) {	//거꾸로 된 정수 구하기
		v *= 10;		//자리수 한자리씩 증가
		v += n % 10;	//한자리씩 더하기

		n /= 10;		//자리수 한자리씩 감소
	}

	return v;			 //int형 값 반환
}

int del_dupnum(int n) {		//int형 형식인자 지역변수 n 선언

	int arr[9], idx = 0;			//배열 arr 관련 지역변수 선언 및 초기화
	int j, ori[9];					//배열 ori 관련 지역변수 선언
	int i, dup, del[9], k, R = 0;	//배열 del 관련 지역변수 선언 및 초기화

	/*배열 arr 구하기*/
	while (n != 0) {				//조건 만족할 동안 반복
		arr[idx++] = n % 10;		//자리수 하나씩 배열 arr에 저장//
		n /= 10;					//자리수 줄이기
	}

	/*배열 ori 구하기*/
	idx--;	//인덱스 범위 조정//
	for (j = idx; j >= 0; j--) 		//배열 arr 역순으로 접근하여
		ori[idx - j] = arr[j];		//배열 ori에 값 저장
		
	/*배열 del 구하기*/
	k = 0;	//인덱스 초기화//
	for (i = 0; i <= idx; i++) {	//인덱스 범위에 유의해 배열 ori에 접근하여

		dup = 0;					 //각 원소가 중복 아니라 가정//
		for (j = 0; j < i; j++)		//이전 원소들과 
			if (ori[i] == ori[j])	//중복되는지 비교
				dup = 1;			 //해당 원소가 중복임을 확인//

		if (dup == 0)				//해당 원소가 이전에 이미 등장하지 않은 경우에만,
			del[k++] = ori[i];		//배열 del에 값 저장
	}

	/*정수 R 구하기*/
	for (i = 0; i < k; i++)			//for문을 통해 인덱스 범위 내 접근하여
	{
		R *= 10;					//자리수 이동하기
		R += del[i];				//배열 del의 원소를 더하고
	}

	return R;		//int형 정수 R 반환
}