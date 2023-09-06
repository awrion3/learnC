#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

//구조체 정의
struct student {
	char name[8];	//널 문자 포함
	int kor, eng, mat;
	double avg;
};

int main(void) {

	int N;
	struct student *p = NULL;

	scanf("%d", &N);
	
	//동적할당 
	p = (struct student*)malloc(N * sizeof(struct student));

	//동적할당 확인
	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//동적할당 사용 (입력)
	for (int i = 0; i < N; i++) {	//구조체 배열 접근
		scanf("%s%d%d%d", p[i].name, &p[i].kor, &p[i].mat, &p[i].eng);	//각 구조체 멤버 접근
		p[i].avg = (double)(p[i].kor + p[i].mat + p[i].eng) / 3;
	}

	//동적할당 사용 (출력)
	for (int i = 0; i < N; i++) {
		printf("%s %.1f ", p[i].name, p[i].avg);

		if (p[i].kor >= 90 || p[i].mat >= 90 || p[i].eng >= 90)
			printf("GREAT ");
		if (p[i].kor < 70 || p[i].mat < 70 || p[i].eng < 70)
			printf("BAD ");

		printf("\n");
	}

	//동적할당 해제
	if (p != NULL)
		free(p);

	return 0;
}