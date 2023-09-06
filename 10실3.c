#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

int main(void) {

	int len = 0;
	char str[100], *p = str, tmp;
	
	scanf("%s", str);

	for (int i = 0; str[i]; i++) //널 문자 전까지의 문자열 길이 측정
		++len;

	for (int i = 0; i < len; i++) { //문자열 길이만큼 반복 횟수 설정
		printf("%s\n", str);	//문자열 출력

		tmp = *p;	//맨 처음 0번 인덱스의 문자 원소 저장 후,
		for (p = str; p < str + len - 1; p++) { //0번 ~ len - 1 (- 1 아래 범위에 유의)번째 문자 원소 이동 (배열 대신 포인터 사용)
			*p = *(p + 1);
		}

		p = str; //다시 초기화! (아래 전에 초기화 하여 p값이 처음 0번을 가리키도록 하기)
		*(p + len - 1) = tmp; //마지막 (ex: 4번) 인덱스에 tmp값 간접 접근으로 대입
	}

	return 0;
}
//참고: 뒤로 한칸씩 이동
/*
for (int i = 0; i < len; i++) { //문자열 길이만큼 반복 횟수 설정
		printf("%s\n", str);	//문자열 출력

		tmp = *(p + len - 1);	//맨 끝 len - 1(ex:4)번째 인덱스의 문자 원소 저장 후,
		for (p = str + len - 2; p >= str; p--) { //len - 2(ex:3) ~ 0번째 문자 원소 이동 (배열 대신 포인터 사용)
			*(p + 1) = *p;
		}
		*(p + 1) = tmp; //인덱스에 유의해 0번째로 조정 후 tmp 문자 이동

		p = str; //다시 초기화 (초기화 아니고 주소이므로 * 안 붙임에 유의)
	}
*/
