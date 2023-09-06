#pragma warning(disable:4996)
#include <stdio.h>

struct student {
	char name[11];	//널 문자 고려
	int score;
};

int main(void) {

	struct student st[3];	//구조체 배열 선언
	FILE *sp;			//파일 포인터 변수 선언

	//구조체 사용
	for (int i = 0; i < 3; i++){
		scanf("%s%d", st[i].name, &st[i].score);
		getchar();	//엔터키 제거
	}

	//파일 열기
	sp = fopen("student.dat", "wb");	//쓰기 모드로 이진 파일 열기
	
	if (sp == NULL)
		return -1;

	//파일 사용
	for (int i = 0; i < 3; i++) {
		fwrite(st[i].name, sizeof(char), 11, sp);	//이진 파일로 출력
		fwrite(&st[i].score, sizeof(int), 1, sp);	
	}

	//파일 닫기
	fclose(sp);

	return 0;
}