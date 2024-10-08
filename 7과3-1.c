#pragma warning (disable:4996) //scanf() 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {			   //main() 함수//

	/*배열 A 관련 변수 선언 및 초기화*/
	int A[20], k = 1, i, M, tmp;

	for (i = 0; i < 20; i++) { //for문으로 배열 접근하여
		A[i] = k++;			   //정수 순서대로 저장
	}

	scanf("%d", &M);	//양의 정수 M 입력

	for (i = 19; i > 20 - M; i--) //배열 뒤 A[19]에서부터 범위 내 접근하여
	{
		tmp = A[i];			//tmp를 활용해서
		A[i] = A[i - 1];	//A[i - 1]를 한칸 뒤로 보내고
		A[i - 1] = tmp;		//A[i]는 한칸 앞으로 교체하면서 정수들 오른쪽으로 이동	
	}

	for (i = 0; i < 20; i++)	//for문으로 배열 접근하여
		printf("%d ", A[i]);	//배열 A 이동시킨 결과 출력

	return 0; //프로그램 정상 종료//
}