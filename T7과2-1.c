#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	char ch, X[100], idx = 0, fl, Y[100], jdx = 0;
	int C[100];

	//1 입력
	scanf("%c", &ch);
	while (ch != '!') {
		X[idx++] = ch;
		scanf("%c", &ch);
	}
	
	//2 중복문자 제외
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (X[i] == X[j])
				fl = 0;

		if (fl == 1)
			Y[jdx++] = X[i];
	}

	//2 등장횟수 계산
	for (int i = 0; i < jdx; i++) {		//배열 Y를 기준으로
		C[i] = 0;
		for (int j = 0; j < idx; j++)	//배열 X의 횟수 체크
			if (Y[i] == X[j])
				++C[i];
	}
	//다른 방법: 배열 Y와 배열 C 인덱스 공유하며 동시 저장
	  
	//3 역순 출력
	for (int i = 0; i < jdx; i++)
		printf("%c %d\n", Y[jdx - 1 - i], C[jdx - 1 - i]);

	return 0;
}
//ccccaaaattttbbbbccccaaaattttdddd!