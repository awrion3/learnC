#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct student {
	char name[20]; //널 문자 포함
	int score[3];

	double avg;
	char res;
};

int main(void) {

	struct student clas[20]; //구조체 변수 선언 (구조체 배열 형태)
	int N, sum[20];

	//입력해서 학생 구조체 당 멤버 name 및 세 score 값 저장
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", clas[i].name);	//이 경우 배열 이름 앞에는 주소 연산자 안붙임
		for (int j = 0; j < 3; j++)
			scanf("%d", &clas[i].score[j]);
	}

	//계산해서 학생 구조체 당 avg 멤버 값 저장
	for (int i = 0; i < N; i++) {
		sum[i] = 0; //값 초기화
		for (int j = 0; j < 3; j++)
			sum[i] += clas[i].score[j];

		clas[i].avg = (double)sum[i] / 3;
	}

	//구조체 배열의 각 원소(학생 구조체) 당 평균 값에 따라 평점 res 멤버 값 저장
	for (int i = 0; i < N; i++) {
		if (clas[i].avg >= 90)	
			clas[i].res = 'A';
		else if (clas[i].avg >= 80)
			clas[i].res = 'B';
		else if (clas[i].avg >= 70)
			clas[i].res = 'C';
		else
			clas[i].res = 'F';
	}

	//출력
	for (int i = 0; i < N; i++)
		printf("%s %.1f %c\n", clas[i].name, clas[i].avg, clas[i].res);

	return 0;
}