#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h> //문자열 처리 함수 포함

//구조체 정의
struct student {
	char name[10];		//학생별 이름 
	int sc1, sc2, sc3;	//학생별 세 점수
	double avg;			//학생별 평균//
};

//함수 선언
void read_data(struct student []);	//반환 없음 (구조체 배열 인자)
void cal_avg(struct student []);
void sort(struct student []);
void print_score(struct student []);

int main(void) {

	struct student cl[10]; //구조체 배열 선언

	read_data(cl);
	
	cal_avg(cl);

	sort(cl);

	print_score(cl);

	return 0;
}

//함수 정의
void read_data(struct student ar[]) {

	struct student *p = ar;	//포인터와 배열 이름 연결

	for (; p < ar + 10; p++) {	//포인터 활용해서 구조체 배열 접근하여
		scanf("%s", p->name);	//해당 구조체 원소의 멤버별 값 입력
		scanf("%d%d%d", &p->sc1, &p->sc2, &p->sc3);	//주소 연산자에 유의
	}
}

void cal_avg(struct student ar[]) {

	struct student *p = ar;

	for (; p < ar + 10; p++) //해당 구조체 원소의 멤버 avg 값 저장
		p->avg = (double)(p->sc1 + p->sc2 + p->sc3) / 3;
}

void sort(struct student ar[]) {

	struct student *p = ar, *q;
	double tmp;
	char str[10];	//임시 변수로 문자열 사용
	int imp;

	for (; p < ar + 9; p++) {
		for (q = p + 1; q < ar + 10; q++) { //포인터를 이용한 선택정렬
			if (p->avg < q->avg) {
				tmp = q->avg;	
				q->avg = p->avg;
				p->avg = tmp;

				//내림차순으로 구조체 원소 간 멤버 name 바꾸며 정렬
				strcpy(str, q->name);
				strcpy(q->name, p->name); //배열 이름에 대입하지 않도록 한다
				strcpy(p->name, str);

				//내림차순으로 구조체 원소 간 멤버들 score 바꾸며 정렬
				imp = p->sc1;
				q->sc1 = p->sc1;
				p->sc1 = imp;

				imp = p->sc2;
				q->sc2 = p->sc2;
				p->sc2 = imp;

				imp = p->sc3;
				q->sc3 = p->sc3;
				p->sc3 = imp;
			}
		}
	}
}

void print_score(struct student ar[]) {

	struct student *p = ar;

	//최고평균점 및 최저평균점 학생의 이름과 평균 출력
	printf("%s %.2f\n", p->name, p->avg);
	p = ar + 9;
	printf("%s %.2f\n", p->name, p->avg);

	//하위 30%의 평균점 받은 학생들의 이름과 평균 출력
	for (p = ar; p < ar + 10; p++) 
		if (p >= ar + 7) //내림차순 정렬을 했기에 가능
			printf("%s %.2f\n", p->name, p->avg);
}
/*
AKim 80 80 80
BKim 90 90 90
CKim 81 81 81
ALee 82 82 82
BLee 83 83 83
CLee 84 84 84
APark 85 85 85
BPark 86 86 86
CPark 87 87 87
DPark 88 88 88
*/