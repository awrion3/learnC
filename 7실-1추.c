#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {

	int N, ar[100], br[100], fl, cr[200], idx = 0; //변수 선언 및 초기화

	scanf("%d", &N);				//값 입력

	for (int i = 0; i < N; i++)		//배열 ar 접근하여 값 입력
		scanf("%d", &ar[i]);

	for (int i = 0; i < N; i++)		//배열 br 접근하여 값 입력
		scanf("%d", &br[i]);

	for (int i = 0; i < N; i++) {	//배열 ar에 대하여
		fl = 1;
		for (int j = 0; j < N; j++)	//배열 br를 비교해
			if (ar[i] == br[j])		//중복되지 않는 ar 원소만
				fl = 0;

		if (fl == 1)				//배열 cr에 저장 
			cr[idx++] = ar[i];		//ar - br 차집합 구하기
	}

	for (int i = 0; i < idx; i++)	//배열 cr 접근하여
		printf(" %d", cr[i]);		//구한 차집합 출력하기

	return 0;
}