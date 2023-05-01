#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int N[5], i, j, tmp;		//int형 변수 선언

	for (i = 0; i < 5; i++)		//for문으로 배열 접근
		scanf("%d", &N[i]);		//각 원소 값 입력

	for (i = 0; i < 5; i++)		 //다섯 정수에 대하여 정렬 반복//
		for (j = 0; j < 4; j++)  //각 정수를 다른 정수들과 비교하여
			if (N[j] > N[j + 1]) //인접한 원소끼리 정렬
			{
				tmp = N[j + 1];  //tmp를 활용하여
				N[j + 1] = N[j]; //더 큰 수를 뒤로 옮기고
				N[j] = tmp;		 //작은 수는 앞으로 옮기기
			}

	for (i = 0; i < 5; i++)	 //for문으로 배열 접근
		printf("%d\n", N[i]);  //각 원소 값 출력

	return 0;		   //프로그램 정상 종료//
}