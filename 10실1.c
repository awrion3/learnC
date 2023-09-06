#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

int main(void) {

	char arr[20];				//문자열을 저장할 문자 배열 선언

	scanf("%s", arr);			//문자열 입출력 서식문자, 인자 배열 이름(즉 값이 아닌 주소 전달)
	//scanf(개행, 탭, 공백 문자 입력 시, 그 전까지 저장하고 널 문자 자동 삽입함)
	
	for (int i = 0; arr[i]; i++) {			//문자열의 끝 arr[i] != '\0'일 동안 반복

		if (arr[i] >= 'a' && arr[i] <= 'z') //소문자인 경우에만
			printf("%c", arr[i]);			//문자열의 해당 원소 출력
	}

	return 0;
}