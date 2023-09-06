#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 함수 관련 헤더파일
#include <string.h>				//문자열 처리 함수 관련 헤더파일//

int main(void) {

	char str1[51], str2[51], str3[101];	//널 문자 고려

	//문자열 입력
	scanf("%s", str1);
	scanf("%s", str2);

	//문자열 비교 및 문자열 복사, 접합
	if (strcmp(str1, str2) < 0) { //음수 반환 시, str1이 사전상 앞에 있다는 뜻
		strcpy(str3, str2);	//큰 문자열 2를 먼저 새 문자열에 복사하고
		strcat(str3, str1);	//작은 문자열 1을 그 뒤에 접합한다
	}
	else {
		strcpy(str3, str2);
		strcat(str3, str1);
	}

	//최종 결과 문자열 3 출력
	printf("%s\n", str3);

	return 0;
}