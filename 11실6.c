#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct student {
	int gender, weight, height;
	int grade;
};

int main(void) {

	int N, i, gr1 = 0, gr2 = 0, gr3 = 0;
	struct student st[10];	//구조체 배열 선언

	scanf("%d", &N); //학생수 입력

	for (i = 0; i < N; i++)	//학생별 구조체 멤버 값 입력
		scanf("%d%d%d", &st[i].gender, &st[i].weight, &st[i].height);

	//표에 따라 점수 매기기 (if문 구조: 큰 값부터 나누어감)
	for (i = 0; i < N; i++) {
		if (st[i].gender == 1) {	 //남
			if (st[i].weight >= 70) {
				if (st[i].height >= 175) 
					st[i].grade = 1;
				else if (st[i].height >= 165)
					st[i].grade = 3;
				else 	
					st[i].grade = 2;
			}
			else if (st[i].weight >= 60) {
				if (st[i].height >= 175) 	
					st[i].grade = 2;
				else if (st[i].height >= 165) 
					st[i].grade = 1;
				else 
					st[i].grade = 3;
			}
			else {
				if (st[i].height >= 175)
					st[i].grade = 3;
				else if (st[i].height >= 165)
					st[i].grade = 2;
				else
					st[i].grade = 1;
			}
		}
		else {						 //여
			if (st[i].weight >= 60) {
				if (st[i].height >= 175)
					st[i].grade = 1;
				else if (st[i].height >= 165)
					st[i].grade = 3;
				else 
					st[i].grade = 2;
			}
			else if (st[i].weight >= 50) {
				if (st[i].height >= 175)
					st[i].grade = 2;
				else if (st[i].height >= 165)
					st[i].grade = 1;
				else
					st[i].grade = 3;
			}
			else {
				if (st[i].height >= 175)
					st[i].grade = 3;
				else if (st[i].height >= 165)
					st[i].grade = 2;
				else
					st[i].grade = 1;
			}
		}
	}

	//산출된 점수 바탕으로 등급별 학생 수 출력
	for (i = 0; i < N; i++) {
		if (st[i].grade == 1)
			gr1++;
		else if (st[i].grade == 2)
			gr2++;
		else if (st[i].grade == 3)
			gr3++;
	}

	printf("%d %d %d", gr1, gr2, gr3);

	return 0;
}