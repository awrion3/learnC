#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct student {
	char name[9]; //널 문자 포함
	int kor, eng, mat;

	double avg;
	char res;
};

int main(void) {

	int N, i, sum[50] = { 0 };		//정수형 배열 선언 및 초기화
	struct student st[50], *p = st;	//구조체 배열 및 구조체 포인터 선언

	scanf("%d", &N);	//학생 수 입력

	for (i = 0; i < N; i++, p++) 	//포인터로 각 구조체 멤버 접근
		scanf("%s%d%d%d", p->name, &p->kor, &p->eng, &p->mat);
		//멤버 name은 배열 이름으로 주소 연산자 달지 않는다

	p = st; //다시 포인터 위치 초기화
	for (i = 0; i < N; i++, p++) {
		sum[i] += (p->kor + p->eng + p->mat);

		//해당 학생의 평균을 각 구조체의 멤버 avg에 저장
		p->avg = (double)sum[i] / 3;
		
		//해당 학생의 평균에 기반해 각 구조체의 멤버 res에 학점 저장 
		if (p->avg <= 100 && p->avg >= 90)
			p->res = 'A';
		else if (p->avg >= 80)
			p->res = 'B';
		else if (p->avg >= 70)
			p->res = 'C';
		else
			p->res = 'D';
	}
	
	//출력
	for (i = 0, p = st; i < N; i++, p++) //포인터도 초기화함을 잊지 않기
		printf("%s %.1f %c\n", p->name, p->avg, p->res);

	return 0;
}