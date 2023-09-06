#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	char ch;
	FILE *fp1, *fp2;	//파일 포인터 선언

	//파일 열기
	fp1 = fopen("test1.txt", "r");	//이미 데이터가 저장된 파일로 읽기 모드로
	fp2 = fopen("test2.txt", "w");	//데이터를 저장할 파일로 쓰기 모드로

	if (fp1 == NULL || fp2 == NULL)
		return -1;

	//파일 사용
	for (int i = 0; i < 9; i++) {
		fscanf(fp1, "%c", &ch);	//파일로부터 데이터 입력받기

		//대소문자 변경해서
		if (ch >= 'A' && ch <= 'Z')
			ch += ('a' - 'A');
		else if (ch >= 'a' && ch <= 'z')
			ch -= ('a' - 'A');

		fprintf(fp2, "%c", ch);	//파일로 데이터 출력(저장)하기 (띄어쓰기 없이)
	}
	
	//파일 닫기
	fclose(fp1);
	fclose(fp2);

	return 0;
}