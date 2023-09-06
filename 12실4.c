#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int row, col;
	char alp = 'a';
	char** p = NULL;

	scanf("%d%d", &col, &row);

	//row행에 대한, 2차원 배열에 대한 동적할당
	p = (char**)malloc(row * sizeof(char*));

	//동적할당 확인
	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//col열에 대한, 1차원 문자열에 대한 동적할당
	for (int i = 0; i < row; i++) {
		p[i] = (char*)malloc(col * sizeof(char));

		//동적할당 확인
		if (p[i] == NULL) {
			printf("failed\n");
			return -1;
		}
	}

	//동적할당 사용 (입력)
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			p[i][j] = alp++;

			if (alp == 'z' + 1)
				alp = 'A';
			else if (alp == 'Z' + 1)
				alp = 'a';
		}

	//동적할당 사용 (출력)
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			printf("%c ", p[i][j]);
		printf("\n");
	}

	//동적할당 해제
	for (int i = 0; i < row; i++)
		if (p[i] != NULL) 
			free(p[i]);	//각 (행별) 1차원 문자열에 대한 동적할당 해제

	if (p != NULL)	
		free(p);	//전체 (2차원) 포인터 배열에 대한 동적할당 해제

	return 0;
}