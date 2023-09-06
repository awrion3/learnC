#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct time {
	int hour, min, sec;
};

int main(void) {

	int psec1, psec2, pgap;
	int ghour, gmin, gsec;

	struct time pnt1, pnt2;	//구조체 (지역)변수 선언

	scanf("%d%d%d", &pnt1.hour, &pnt1.min, &pnt1.sec);
	scanf("%d%d%d", &pnt2.hour, &pnt2.min, &pnt2.sec);

	//구조체 멤버 값 계산
	psec1 = pnt1.hour * 60 * 60 + pnt1.min * 60 + pnt1.sec;
	psec2 = pnt2.hour * 60 * 60 + pnt2.min * 60 + pnt2.sec;

	//기존 시간 차이 계산
	pgap = psec2 - psec1;

	ghour = pgap / (60 * 60);
	pgap %= (60 * 60);

	gmin = pgap / 60;
	pgap %= 60;

	gsec = pgap;

	printf("%d %d %d", ghour, gmin, gsec);

	return 0;
}