#pragma warning(disable:4996)
#include <stdio.h>

//0 선언
int reverse_num(int);
int is_palindromic(int);
int del_digit(int, int);

int main(void) {

	int N, T;
	scanf("%d%d", &N, &T);

	//2 호출
	printf("%d %d %d ", N, reverse_num(N), is_palindromic(N));
	printf("%d", del_digit(N, T));

	return 0;
}

//1 정의
int reverse_num(int N) {

	int rev = 0;

	while (N != 0) {
		rev *= 10;
		rev += N % 10;
		N /= 10;
	}
	return rev;
}

int is_palindromic(int N) {

	if (N == reverse_num(N))
		return 1;
	return 0;
}

int del_digit(int N, int T) {

	int num = N, arr[9], idx = 0;
	int tx = --T, orr[9], res = 0;
	//tx: 문제에서 주어진 인덱스 조건 주의!!//

	while (num != 0) {
		arr[idx++] = num % 10;
		num /= 10;
	}

	if (is_palindromic(N)) {

		for (int i = 0; i < idx; i++) { //역순 배열에 대하여
			if (i == tx) { 
				arr[i] = arr[i + 1];
				tx++;
			}
		}
		idx--; //자르기
		
		for (int i = 0; i < idx; i++)
			orr[i] = arr[idx - 1 - i];	//원래 배열을 구하기

		tx = T; //초기화//

		for (int i = 0; i < idx; i++) { //원래 배열에 대하여
			if (i == tx) {
				orr[i] = orr[i + 1];
				tx++;
			}
		}
		idx--; //자르기

		for (int i = 0; i < idx; i++) {
			res *= 10;
			res += orr[i];	//삭제 인덱스 반영한 수 배열 orr로 구하기
		}
	}
	else {

		for (int i = 0; i < idx; i++) { //역순 배열에 대하여
			if (i == tx) {
				arr[i] = arr[i + 1];
				tx++;
			}
		}
		idx--; //자르기

		for (int i = 0; i < idx; i++) {
			res *= 10;
			res += arr[idx - 1 - i]; //삭제 인덱스 반영한 수 배열 arr로 구하기
		}		  //i: 다시 합칠 때 원래 순서에 주의!!//
	}

	return res;
}