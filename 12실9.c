#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함
#include <string.h>	//문자열 처리 표준 함수 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, ln, min;
	char **p = NULL;
	char temp[100], *r = NULL;

	scanf("%d", &N);
	getchar();	//아래 gets_s에서 엔터키 입력되지 않도록 막음! (이 경우 첫번째 문자열은 널로 저장됨)

	//할당
	p = (char**)malloc(N * sizeof(char*));

	if (p == NULL) 
		return -1;

	//입력
	for (int i = 0; i < N; i++) {
		gets_s(temp, 100);	//공백 포함, 개행 빼고 널 문자 자동 추가
		
		ln = strlen(temp);

		p[i] = (char*)malloc((ln + 1) * sizeof(char));	//널 문자 크기 고려
		
		if (p[i] == NULL)
			return -1;

		strcpy(p[i], temp);
	}

	//비교
	min = strlen(p[0]);

	for (int i = 1; i < N; i++)
		if (strlen(p[i]) < min) {
			min = strlen(p[i]);
			r = p[i];
		}
	
	//출력
	printf("%s", r);

	//해제
	for (int i = 0; i < N; i++)
		if (p[i] != NULL){
			free(p[i]);
			p[i] = NULL;
		}

	if (p != NULL){
		free(p);
		p = NULL;
	}

	return 0;
}