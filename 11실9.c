#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct result {
	int high, low, pgap; //가장 높낮 점수 및 합격 기준 점수차
	int gap;			 //점수차
	char porf;			 //시험 통과 여부
};

//함수 정의
void passorfail(struct result* p) {

	p->gap = p->high - p->low;	//포인터를 활용해 간접 접근하여 값 반환하지 않아도 됨

	if (p->gap <= p->pgap)
		p->porf = 'P';
	else
		p->porf = 'F';
}

int main(void) {

	struct result st;	//구조체 선언

	//구조체 멤버들에 값 저장
	scanf("%d%d%d", &st.high, &st.low, &st.pgap);

	//함수 호출 (구조체 주소 전달)
	passorfail(&st);

	//구조체 멤버 값들 출력
	printf("%d %c", st.gap, st.porf);

	return 0;
}