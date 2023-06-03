#pragma warning (disable:4996)
#include <stdio.h>

//함수 선언
void addArray(int*, int*, int*, int); 

int main(void) {

	int a[20], b[20], c[20], N;    //배열 등 변수 선언
	int *ap, *bp, *cp;			   //포인터 선언

	scanf("%d", &N);				//배열 크기 입력

	for (ap = a; ap < a + N; ap++)	//포인터 연결 및 배열 a 주소로 접근하여
		scanf("%d", ap);			//배열 원소 값 입력

	for (bp = b; bp < b + N; bp++)	//포인터 연결 및 배열 b 주소로 접근하여
		scanf("%d", bp);			//배열 원소 값 입력

	addArray(a, b, c, N);			//배열 a b c와 배열 크기 실인자

	for (cp = c; cp < c + N; cp++)	//포인터 연결 및 배열 c 주소로 접근하여
		printf(" %d", *cp);			//배열 원소 값 출력

	return 0;
}
//함수 정의
void addArray(int *ap, int *bp, int *cp, int n) { //포인터 ap bp cp와 배열 크기 형식인자

	int *p;	//포인터 선언

	for (p = cp; p < cp + n; p++) { //포인터 연결 및 배열 c 주소로 접근하여
		*p = *ap + *(bp + n - 1);	//포인터 참조하며 배열 a + 배열 b의 역순 값 배열 c에 저장
		ap++;	//배열 a 주소 증가
		bp--;	//배열 b 주소 감소
	}
}