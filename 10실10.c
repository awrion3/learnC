#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 함수 관련 헤더파일 (gets_s, getchar 등)
#include <string.h>				//문자열 처리 함수 관련 헤더파일//

int main(void) {

	char str[101], mstr[101]; 
	int N, len, min, f = 0, j;

	scanf("%d", &N);
	getchar();	//엔터 키 제거

	for (int i = 0; i < N; i++) {
		gets_s(str, 101);	//공백을 포함하는 문자열 입력받음
		len = strlen(str);	//입력한 문자열의 시작 주소를 받아 길이 계산해 반환

		if (f == 0) {		//최소 길이 처음 길이 값으로 초기화
			min = len;
			for (j = 0; str[j]; j++) {	//널 문자 만나기 전까지 반복
				mstr[j] = str[j]; //최소 길이 mstr 초기값 대입
			}
			mstr[j++] = '\0'; //널 문자 삽입
			f = 1;
		}
		if (len < min) {	//최소 길이 갱신
			min = len;
			for (j = 0; str[j]; j++) {
				mstr[j] = str[j]; //최소 길이 mstr 갱신 대입
			}
			mstr[j++] = '\0'; //널 문자 삽입
		}
	}
	
	printf("%s", mstr);	//최소 길이 문자열 mstr 출력

	return 0;
}
