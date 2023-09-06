#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct student {
	char name[10]; //널 문자 고려
	int score;
};

//함수 선언
struct student* select_min(struct student *);

int main(void) {

	struct student cl[5], *r;	//구조체 배열 및 구조체 포인터 선언

	for (int i = 0; i < 5; i++)
		scanf("%s%d", cl[i].name, &cl[i].score);	//주소 연산자 붙고 안붙고에 유의

	r = select_min(cl);    //배열이름 전달 (주소 연산자 안 붙임)

	printf("%s %d", r->name, r->score); //포인터를 활용해 접근한 값 출력

	return 0;
}

//함수 정의
struct student* select_min(struct student *ar) {

	//포인터가 구조체 배열의 0번 원소 (첫번째 구조체)를 가리키는 중
	int min = ar->score; //이를 활용해 첫번째 구조체의 멤버에 접근해 최소값 초기화

	struct student *p = ar + 1;	//반복문을 위한 새 포인터 선언
	struct student *r = ar;	//반환값을 위한 새 포인터도 선언 (및 아래 반복문 min 조건 미충족 시를 위한 반환값 초기화)

	for (; p < ar + 5; p++) {
		if (min > p->score) {
			min = p->score; //최소값 갱신
			r = p;	//해당 구조체 (원소)의 주소값도 갱신
		}
	}

	return r;	//멤버로 최소값 score를 지닌 구조체(배열의 원소)의 주소 반환
}