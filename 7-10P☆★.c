#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int arr[5], r[5], rank[5], i, j, tmp, k = 1; //int형 변수 선언

	/*배열 arr 정수 입력*/
	for (i = 0; i < 5; i++)		//for문으로 배열 접근
	{
		scanf("%d", &arr[i]);	//각 정수 값 입력
		r[i] = arr[i];			//배열 r에도 저장
	}

	/*배열 r 정수 정렬*/
	for (i = 0; i < 5; i++)		//다섯 정수에 대해 정렬 반복
		for (j = 0; j < 5; j++)       //각 정수를 다른 정수들과 비교하여
			if (r[i] < r[j] && i < j) //앞의 정수가 더 작은 경우,
			{
				tmp = r[j];	  //tmp를 활용하여
				r[j] = r[i];  //작은 앞의 정수를 뒤로 보내고
				r[i] = tmp;   //큰 뒤의 정수를 앞으로 보내 내림차순 정렬
			}

	/*배열 rank 순위 매김*/
	for (i = 0; i < 5; i++)		//for문으로 배열 접근
	{
		k = 1;					  //등수 누적 계산 초기화//
		for (j = 0; j < 5; j++)	//arr 배열과 r 배열을 비교하여 
			if (arr[i] == r[j])	//입력된 순서가 정렬된 순서와 같을 시,
			{
				rank[i] = k;	  //rank 배열에 등수 저장 후 종료//
				break;
			}
			else
				rank[i] = ++k;	  //누적 후 rank 배열에 등수 저장//
	}

	/*배열 arr, rank 결과 출력*/
	for (i = 0; i < 5; i++)		//for문으로 배열 접근
		printf("%d=r%d ", arr[i], rank[i]);	 //입력 순서대로 등수 출력

	return 0;		   //프로그램 정상 종료//
}