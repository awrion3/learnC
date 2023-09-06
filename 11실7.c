#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct number {
	int num, rank;
};	//여기서 선언 (및 초기화) 시, 전역 변수임

int main(void) {

	int rak;
	struct number N[10];	//구조체 배열 선언

	//구조체 배열의 각 구조체의 멤버 num에 정수값 저장
	for (int i = 0; i < 10; i++)
		scanf("%d", &N[i].num);
	
	//각 구조체의 멤버 rank에 순위를 저장
	for (int i = 0; i < 10; i++) {
		rak = 1;
		for (int j = 0; j < 10; j++) {
			if (N[i].num < N[j].num)
				++rak;
		}
		N[i].rank = rak;
	}

	//구조체 멤버 순위 값이 각각 3, 7등인 구조체의 멤버 정수를 순서대로 출력
	for (int i = 0; i < 10; i++)
		if (N[i].rank == 3)
			printf("%d ", N[i].num);
		
	for (int i = 0; i < 10; i++) 
		if (N[i].rank == 7)
			printf("%d ", N[i].num);

	return 0;
}

//참고: 구조체 배열을 각 구조체 멤버 num을 기준으로 내림차순 정렬하기
	/*
	for (int i = 0; i < 9; i++) 	//선택정렬 방식으로
		for (int j = i + 1; j < 10; j++)
			if (N[i].num < N[j].num) {	//내림차순 정렬
				tmp = N[i].num;
				N[i].num = N[j].num;	//뒤에 있던 큰 값을 앞으로 이동
				N[j].num = tmp;
			}

	for (int i = 0; i < 10; i++) {
		printf("%d ", N[i].num);
	}
	printf("\n");
	*/