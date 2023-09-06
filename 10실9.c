#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 함수 관련 헤더파일
#include <string.h>				//문자열 처리 함수 관련 헤더파일//

//함수 선언
int check(char *);

int main(void) {

	char ar[31];		//널 문자 고려
	scanf("%s", ar);	//공백 문자 포함하지 않는, 이므로 gets_s 아닌 scanf 사용

	//문자열의 길이 함수 및 사용자 정의 함수 결과값 출력
	printf("%d %d", strlen(ar), check(ar));

	return 0;
}

//함수 정의
int check(char* pa) {

	int i = 0, len, val;
	char rar[51] = { 0 };	//널 문자(아스키 코드값 0)로 배열 초기화, 이후 추가 안하게끔

	len = strlen(pa);	//pa의 값은 배열 이름 ar, 0번 원소의 주소값

	while (pa[i]) {		//널 문자 만나기 전까지, 배열 형태 참조
		rar[len - 1 - i] = pa[i++];	//역 배열에 인덱스 순으로 배열 원소 대입
	}

	val = strcmp(rar, pa);	//rar == par면 0 반환 (대소문자 자동 구분함)

	if (val != 0)	//두 배열이 같지 않으면, 즉 회문이 아니면 0 반환
		return 0;
	return 1;		//기본은 회문으로 판단해 1 반환

}