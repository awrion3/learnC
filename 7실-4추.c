#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {

	int N, arr[100], n, m, a, b;	//변수 선언

	scanf("%d", &N);				//값 입력

	for (int i = 0; i < N; i++)		//배열 접근하여
		scanf("%d", &arr[i]);		//원소 값 입력

	scanf("%d%d", &n, &m);			//인덱스 및 개수 입력
	
	b = m;								//개수 저장
	for (int j = 0; j < m; j++) {	//개수만큼 반복
		a = n;							//인덱스 저장
		for (int i = 0; i < N; i++)	//배열 접근하여
			if (i == a + b - 1) {	//인덱스 같을 시
				arr[i - 1] = arr[i];	//한칸씩 앞으로 당기며 삭제
				a++;				//뒤의 값도 당기기
			}
		b--;						//한칸 조정
	}

	for (int i = N - m - 1; i >= 0; i--)	//거꾸로 접근하여
		printf(" %d", arr[i]);				//변경된 배열 출력

	return 0;
}