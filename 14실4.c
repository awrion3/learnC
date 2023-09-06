#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	//파일 포인터 선언
	char fname1[21], fname2[21], fname3[21], ch;	//널 문자 고려
	FILE *fp1, *fp2;

	gets_s(fname1, 20);	//사용자 키보드로터 파일 이름 두개 입력받기(공백 포함)
	gets_s(fname2, 20);
	gets_s(fname3, 20);	//파일 이름 하나 입력받기

	//파일 열기
	fp1 = fopen(fname1, "w");	//쓰기 모드로 열기
	fp2 = fopen(fname2, "w");

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//파일 사용
	fprintf(fp1, "%s\n", fname1);	//파일 이름 두 개를 파일에 출력(저장)
	fprintf(fp1, "%s", fname2);
	fprintf(fp2, "%s", fname3);		//파일 이름 하나를 파일에 출력

	//파일 닫기//
	fclose(fp1);
	fclose(fp2);

	//다시 파일 열기
	fp1 = fopen(fname1, "a");	//추가 쓰기 모드로 열기
	fp2 = fopen(fname2, "r");	//읽기 모드로 열기

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//파일 사용
	ch = fgetc(fp2);	//출력 파일에서 문자 한 개 읽어서 출력하기
	while (!feof(fp2)) {	//파일의 끝까지 반복
		fputc(ch, fp1);	//입력 파일에 저장(입력)하기
		ch = fgetc(fp2);
	}

	//파일 닫기
	fclose(fp1);
	fclose(fp2);

	return 0;
}