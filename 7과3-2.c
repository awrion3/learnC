#pragma warning (disable:4996) //scanf() 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {			   //main() 함수//

	int A[20], i;			 //배열 A 관련 변수 선언
	int M, F, R, tmp;		 //배열 A 이동 관련 변수 선언

	for (i = 0; i < 20; i++) { //for문으로 배열 접근하여
		A[i] = i + 1;		   //정수 순서대로 저장
	}

	scanf("%d%d%d", &F, &R, &M);	//인덱스 F와 R, 양의 정수 M 입력

	for (i = R; i > F + (R - F - M) + 1; i--) //뒤 A[R]에서부터 범위* 내 배열 접근하여
	{										  //*F 시작점 + F ~ M 거리 + 1 인덱스 범주
		tmp = A[i];			//tmp를 활용해서
		A[i] = A[i - 1];	//A[i - 1]를 한칸 뒤로 보내고
		A[i - 1] = tmp;		//A[i]는 한칸 앞으로 교체하면서 정수들 오른쪽으로 이동	
	}

	for (i = 0; i < 20; i++)	//for문으로 배열 접근하여
		printf("%d ", A[i]);	//배열 A 이동시킨 결과 출력

	return 0; //프로그램 정상 종료//
}