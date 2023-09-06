#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함
#include <string.h>	//문자열 처리 표준 함수 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, ln;
	char **p = NULL, *r = NULL;
	char tmp[101]; 	//널 문자 고려

	scanf("%d", &N);
	getchar();	//아래 gets_s 고려

	p = (char**)malloc(N * sizeof(char*));

	if (p == NULL)	//동적할당 확인//
		return -1;

	for (int i = 0; i < N; i++) {
		gets_s(tmp, 100);	//공백을 포함
		ln = strlen(tmp);

		p[i] = (char*)malloc((ln + 1) * sizeof(char));	//해당 문자열에 맞게 메모리 동적할당

		if (p[i] == NULL)	//동적할당 확인//
			return -1;

		strcpy(p[i], tmp);	//동적할당된 공간에 저장
	}

	for (int i = 0; i < N - 1; i++) { //내림차순 선택정렬 + 문자열 아닌 주소만 교환
		for (int j = i + 1; j < N; j++)
			if (strlen(p[i]) < strlen(p[j])) {	
				r = p[j];
				p[j] = p[i];
				p[i] = r;
			}
	}

	for (int i = 0; i < N; i++)
		printf("%s\n", p[i]);

	//동적할당 해제 및 댕글링 포인터 방지
	for (int i = 0; i < N; i++) 
		if (p[i] != NULL) {
			free(p[i]);
			p[i] = NULL;
		}

	if (p != NULL) {
		free(p);
		p = NULL;
	}
	
	return 0;
}