#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct date {
	int year, month, day;
};

//함수 선언
struct date* select_min(struct date* , struct date*);

int main(void) {

	struct date a, b, *p;

	//입력 구분자 정의해 사용
	scanf("%d/%d/%d", &a.year, &a.month, &a.day);
	scanf("%d/%d/%d", &b.year, &b.month, &b.day);

	//함수에서 반환받은 주소를 연결
	p = select_min(&a, &b);

	//출력
	printf("%d/%d/%d\n", p->year, p->month, p->day);

	return 0;
}

//함수 정의
struct date* select_min(struct date* a, struct date* b) {

	if (a->year < b->year)
		return a;
	else if (a->year > b->year)
		return b;
	else {	//년이 같으면
		if (a->month < b->month)
			return a;
		else if (a->month > b->month)
			return b;
		else {	//월이 같으면
			if (a->day < b->day)
				return a;
			else if (a->day > b->day)
				return b;
			else  //일까지 같을 시 
				return a;
		}
	}
}
