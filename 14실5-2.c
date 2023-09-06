#pragma warning(disable:4996)
#include <stdio.h>

struct student {
	char name[11];	//널 문자 고려
	int score;
};

int main(void) {

	struct student st[3];	//구조체 배열 선언
	FILE* sp;			//파일 포인터 변수 선언

	//파일 열기
	sp = fopen("student.dat", "rb");	//읽기 모드로 이진 파일 열기

	if (sp == NULL)
		return -1;

	//파일 사용
	for (int i = 0; i < 3; i++) {
		fread(st[i].name, sizeof(char), 11, sp);	//이진 파일에서 입력받아 구조체에 저장
		fread(&st[i].score, sizeof(int), 1, sp);
	}

	//파일 닫기
	fclose(sp);

	//구조체 사용
	for (int i = 0; i < 3; i++) 
		printf("%s %d\n", st[i].name, st[i].score);
	
	return 0;
}