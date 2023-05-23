#pragma warning (disable:4996)
#include <stdio.h>

int is_prime_number(int);
int count_prime_number(int, int);

int main(void) {

	int N, num, cnt = 0, max = 0, mnum;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		cnt = count_prime_number(cnt, num);

		if (max < cnt) {
			max = cnt;
			mnum = num;
		}
	}

	//출력
	if (max == 0)
		printf("%d", max);
	else
		printf("%d\n%d", max, mnum);

	return 0;
}

int is_prime_number(int num) {

	int isp = 1;

	for (int i = 2; i < num; i++)
		if (num % i == 0)
			isp = 0;

	if (num < 2)
		isp = 0;

	return isp;
}

int count_prime_number(int cnt, int num) {

	if (is_prime_number(num) && num < 100)
		return cnt + 1; 
	  //return cnt++; 해버리면 cnt는 0인채로 반환됨에 유의

	return 0;
}

//15
//11 13 17 19 71 73 74 2 3 5 58 97 89 79 47
//17
//11 13 17 19 101 71 73 74 2 3 5 58 97 89 79 11 37