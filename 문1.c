#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	double N, M, sc;		 //double형 변수 선언

	scanf("%lf%lf", &N, &M); //두 점수 입력

	sc = N * 0.4 + M * 0.6;  //최종 성적 산출

	if (sc >= 85.5)			 //학점 'A'
		printf("A");
	else if (sc >= 75.5)     //학점 'B'
		printf("B");		 
	else if (sc >= 60.0)     //학점 'C'
		printf("C");		 
	else					 //학점 'F'
		printf("F");		 

	if (sc >= 60 || M >= 90)  //해당 기준에 따라서
		printf(" PASS");
	else                      //PASS or FAIL 판별
		printf(" FAIL");

	return 0;
}