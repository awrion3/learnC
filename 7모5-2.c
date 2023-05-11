#pragma warning (disable:4996)	 //scanf() 관련 오류 해결//
#include <stdio.h>				 //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int del_dupnum(int);			 //int형 반환 (int형 인자)

/*/main 함수/*/
int main(void) {

	/*지역변수 N 선언 및 값 입력*/
	int N;
	scanf("%d", &N);

	/*함수 호출 및 반환값 출력*/
	printf("%d", del_dupnum(N));

	return 0;						   //프로그램 정상 종료//
}

/*/함수 정의/*/
int del_dupnum(int n) {		//int형 반환 (int형 형식인자 지역변수 n 선언)

	int v, idx = 0, kdx = 0, dup, R;	//지역변수 선언 및 초기화
	int arr[9], del[9];					//int형 배열 선언

	//거꾸로 된 정수 구하기//
	v = 0;				//거꾸로 된 정수 값 초기화
	while (n != 0) {
		v *= 10;		//자리수 한자리씩 증가
		v += n % 10;	//한자리씩 더하기

		n /= 10;		//자리수 한자리씩 감소
	}
	
	//배열 arr 구하기//
	while (v != 0) {			//거꾸로 된 정수의 뒷자리부터
		arr[idx++] = v % 10;	//자리수 하나씩 배열 arr에 저장//
		v /= 10;
	}

	//배열 del 구하기//
	for (int i = 0; i < idx; i++) {	//인덱스 범위에 유의해 배열 arr에 접근하여

		dup = 0;						//각 원소가 중복 아니라 가정//
		for (int j = 0; j < i; j++)	//이전 원소들과 
			if (arr[i] == arr[j])	//중복되는지 비교
				dup = 1;				//해당 원소가 중복임을 확인//

		if (dup == 0)				//해당 원소가 이전에 이미 등장하지 않은 경우에만,
			del[kdx++] = arr[i];		//배열 del에 값 저장
	}

	//정수 R 구하기//
	R = 0;					//중복된 숫자가 없는 정수 R 값 초기화
	for (int i = 0; i < kdx; i++)	//for문을 통해 배열 del 인덱스 범위 내 접근하여
	{
		R *= 10;					//자리수 이동
		R += del[i];				//배열 del의 원소를 더하기
	}

	return R;		//int형 정수 R 반환
}