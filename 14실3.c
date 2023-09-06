#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	//파일 포인터 선언
	char fname1[21], fname2[21], ch;	//널 문자 고려
 	FILE *fp1, *fp2;

	gets_s(fname1, 20);	//사용자 키보드로터 파일 이름 두 개 입력받기(공백 포함)
	gets_s(fname2, 20);

	//파일 열기
	fp1 = fopen(fname1, "w");	//쓰기 모드로 열기

	if (fp1 == NULL)
		return -1;

	//파일 사용
	fprintf(fp1, "%s\n", fname1);	//파일 이름 두 개를 파일에 출력(저장)
	fprintf(fp1, "%s", fname2);

	//파일 닫기//
	fclose(fp1);
	
	//파일 열기
	fp1 = fopen(fname1, "r");	//이번엔 읽기 모드로 열기
	fp2 = fopen(fname2, "w");	//쓰기 모드로 열기

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//파일 사용
	ch = fgetc(fp1);	//입력 파일에서 문자 한 개 읽어서
	while (!feof(fp1)) {	//파일의 끝까지 반복
		fputc(ch, fp2);	//출력 파일에 저장하기
		ch = fgetc(fp1);
	}

	//파일 닫기
	fclose(fp1); 
	fclose(fp2);

	return 0;
}