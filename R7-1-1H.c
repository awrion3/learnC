#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, x, idx, arr[100], fl;
	int pal[100], kdx = 0, tmp; //kdx는 여기서 초기화

	scanf("%d", &N); //

	while (N > 0) { //

		x = N; //
		idx = 0; //인덱스 초기화//
		while (x != 0) {
			arr[idx++] = x % 10; //일의 자리부터 저장
			x /= 10;
		}

		fl = 0; //판별 초기화//
		for (int i = 0; i < idx; i++)
			if (arr[i] == arr[idx - 1 - i]) //끝부터 세트로 비교
				fl = 1;
			else
			{
				fl = 0; 
				break; //아닐 시 비교 종료
			}

		if (fl == 1)
			pal[kdx++] = N; //회문수 저장
		
		scanf("%d", &N); //
	}

	for (int i = 0; i < kdx - 1;i++)
		for (int j = i + 1; j < kdx; j++) //회문수 내림차순 선택정렬
			if (pal[i] < pal[j]) {
				tmp = pal[i];
				pal[i] = pal[j];
				pal[j] = tmp;
			}

	for (int i = 0; i < kdx; i++) //배열 출력
		printf("%d ", pal[i]);

	return 0;
}
