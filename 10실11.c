#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 함수 관련 헤더파일 
#include <string.h>				//문자열 처리 함수 관련 헤더파일//

int main(void) {

	char str1[81], str2[11]; 
	int i = 0, j = 0, isin = 0, f = 0;

	scanf("%s%s", str1, str2); //공백 포함 안하므로, scanf() 사용

	printf("%d ", strlen(str1)); //첫 번째 문자열의 길이 출력

	while (str1[i]) { //널 문자 만나기 전까지 진행
		while (str2[j++] == str1[i++]) {	//같으면 계속 증가하며 비교	
			if (j == strlen(str2)) {		//인덱스와 길이가 같을 시 확인하고 내부 반복 중지
				isin = 1;
				break;
			}
			f = 1;
		}
		j = 0; //내부 반복문 빠져 나올 시 j는 다시 처음부터 해서 비교

		if (f == 1) {	//다만 중복문자로 인해, 내부 반복문 한번 들어갔다 나온 경우
			i--;		//i도 한칸 뒤로 가서 리셋하기
			f = 0;
		}
	}

	printf("%d", isin);	//확인 결과 출력

	return 0;
}