#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 함수 관련 헤더파일 
#include <string.h>				//문자열 처리 함수 관련 헤더파일//

int main(void) {

	char str1[101], str2[101];
	int i = 0, j = 0, istm = 0, f = 0;

	//공백을 포함하는 문자열 입력받기
	gets_s(str1, 101);
	gets_s(str2, 101);

	while (str1[i]) { //널 문자 전까지 str1은 비교 진행 (아래 인덱스에 의해)
		while (str1[i++] == str2[j++]) {

			if (j == strlen(str2)) {
				istm++;	//들어간 횟수 누적하기
				break;
			}
			f = 1;
		}
		j = 0;			//같지 않을 시, str2 인덱스 처음으로 초기화

		if (f == 1) {	//내부 반복 들어갔을 시, str1 인덱스 한칸 뒤로 초기화
			i--;
			f = 0;		//예) str1: Hel'loworld str2: lo'에서 같지 않아서 튕겨나오나,
		}				//그다음 Hello'world서가 아닌 Hell'oworld부터 다시 비교하기 위함
	}

	//등장 횟수 출력
	printf("%d\n", istm); 

	return 0;
}