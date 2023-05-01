#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int n[10], i, j, c[10], cnt = 1, f[10] = { 0 }; //int형 변수 선언

	for (i = 0; i < 10; i++)		//for문으로 배열 접근
		scanf("%d", &n[i]);			//10개의 정수 입력

	/*동일 값 등장 횟수*/
	for (i = 0; i < 10; i++) {		//for문으로 배열 n 접근
		cnt = 1;					//cnt 값 초기화
		for (j = 0; j < 10; j++)		//한 값에 대해 다른 값 비교하여
			if (i != j && n[i] == n[j]) //동일 값의 등장 횟수 세기
				c[i] = ++cnt;		//배열 c에 저장
			else
				c[i] = cnt;			//중복 없을 시 배열 c에 1 저장
	}

	/*동일 값 중복 확인*/
	for (i = 0; i < 10; i++)		//for문을 통한 배열 접근
		for (j = i; j < 10; j++)         //배열의 한 값에 대해
			if (i != j && n[i] == n[j])  //다른 값 비교하여
				f[j] = 1;			//중복 확인한 값 배열 f에 저장

	/*정수 입력 횟수 출력*/
	for (i = 0; i < 10; i++)	   //for문을 통한 배열 접근
		if (f[i] == 0)			   //배열 f를 참고하여 중복 제외하고
			printf("%d %d\n", n[i], c[i]); //각 정수와 등장 횟수 출력하기

	return 0;		   //프로그램 정상 종료//
}