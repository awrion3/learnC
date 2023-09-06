#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함
#include <string.h>	//문자열 처리 표준 함수 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, len;
	char** p = NULL, tmp[101], * s = NULL;

	scanf("%d", &N);
	getchar();

	//동적할당
	p = (char**)malloc(N * sizeof(char*));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//동적할당 사용
	for (int i = 0; i < N; i++) {
		//임시 문자열 저장
		gets_s(tmp, 100);

		len = strlen(tmp);
		//2차원 포인터 배열의 각 1차원 문자열(길이 맞춤)에 대한 동적할당
		p[i] = (char*)malloc((len + 1) * sizeof(char));

		if (p[i] == NULL) {
			printf("failed\n");
			return -1;
		}
		//문자열 복사
		strcpy(p[i], tmp);
	}

	//비교
	for (int i = 0; i < N - 1; i++)
		if (strcmp(p[i], p[i + 1]) > 0) {	//strcmp 사용해서 두 문자열씩 비교
			s = p[i + 1];		//사전상 뒤에 p[i]가 오는 경우, 뒤로 이동시키기
			p[i + 1] = p[i];	//문자열 자체가 아닌 주소를 교환
			p[i] = s;
		}

	//출력
	for (int i = 0; i < N; i++)
		printf("%s\n", p[i]);

	//동적할당 해제
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
/*
4
apricot
peach
willow
birch
*/
