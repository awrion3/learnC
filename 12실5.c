#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, i, cnt1 = 0, cnt2 = 0;
	char *p = NULL; //문자열 관련 포인터 선언 및 초기화
	char c1, c2;

	scanf("%d", &N);
	getchar();	//%c 특성상 엔터 키 제외

	p = (char *)malloc((N + 1) * sizeof(char)); //문자열 길이(널 포함)만큼의 메모리 동적할당

	//동적할당 성공여부
	if (p == NULL) {
		printf("memory allocation failed\n");
		return -1;
	}

	for (i = 0; i < N; i++) 
		p[i] = getchar();	//개별 문자 입력받기
	p[i] = '\0';	//문자열임을 알려줌
	getchar();	//엔터 키 제외

	c1 = getchar();	
	getchar();	//공백 문자 제외 필요
	c2 = getchar();

	for (i = 0; i < N; i++) {
		if (p[i] == c1)	//각각 일치 개수 세서 저장
			cnt1++;
		if (p[i] == c2)
			cnt2++;
	}

	printf("%d %d", cnt1, cnt2);

	//동적할당 해제 및 포인터 정리
	if (p != NULL) {
		free(p);	//동적할당 해제
		p = NULL;	//포인터 주소 고정
	}

	return 0;
}