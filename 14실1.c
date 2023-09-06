#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num, R, cnt = 0, sum = 0;
	double avg;

	FILE *fp;	//파일 포인터 선언

	//파일 열기1
	fp = fopen("data.txt", "w");	//쓰기 모드로 파일을 열어 데이터 입력할 준비
	
	if (fp == NULL) {
		printf("couldn't open file\n");
		return -1;	//프로그램 비정상 종료
	}

	//파일 사용1
	fscanf(stdin, "%d", &num);	//사용자 키보드로부터 데이터 받아쓰기 (scanf와 동일) 

	while(!feof(stdin)) {		//EOF 입력될 때까지 반복하기 
		fprintf(fp, "%d\n", num);	//데이터를 파일로 출력 (저장)
		fscanf(stdin, "%d", &num);	//참고: stdin도 FILE 포인터명, fscanf는 읽기에 실패시 EOF 값 반환. R = 을 활용해 R != EOF로도 비교 가능//
	}
	//EOF 입력은 ctrlZ (scanf 관련 사용시 3번 입력해야 함에 유의)
	 
	//파일 닫기1
	fclose(fp);

	//파일 열기2
	fp = fopen("data.txt", "r");	//읽기 모드로 파일을 열어 데이터 출력할 준비

	if (fp == NULL) {
		printf("couldn't open file\n");
		return -1;
	}

	//파일 사용2
	fscanf(fp, "%d", &num);	//파일로부터 데이터 읽어들이기

	while (!feof(fp)) {		//파일의 끝을 만날 때까지 반복하기
		cnt++;		//정수 개수 구하기
		sum += num;	//졍수 합계 구하기
		fscanf(fp, "%d", &num);
	}

	avg = (double) sum / cnt;	//정수 평균 구하기

	printf("%d\n%d\n%.2f\n", cnt, sum, avg);	//값들 출력하기	

	//파일 닫기2
	fclose(fp);
	
	return 0;
}