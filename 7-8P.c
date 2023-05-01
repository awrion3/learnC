#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int N[5], i, j, tmp;	 //int형 변수 선언

	for (i = 0; i < 5; i++)	 //for문으로 배열 접근
		scanf("%d", &N[i]);  //각 원소 값 입력

	for (i = 0; i < 4; i++)  //for문으로 배열 접근하여
		if (N[i] > N[i + 1]) //인접한 원소끼리 크기 비교
		{
			tmp = N[i + 1];  //tmp를 활용하여
			N[i + 1] = N[i]; //더 큰 수를 뒤로 옮기고
			N[i] = tmp;		 //작은 수는 앞으로 옮기기
		}

	for (i = 0; i < 5; i++)	 //for문으로 배열 접근
		printf("%d\n", N[i]);  //각 원소 값 출력

	return 0;		   //프로그램 정상 종료//
}