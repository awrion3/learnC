#pragma warning(disable:4996)
#include <stdio.h>

//0
int is_prime_number(int);
int count_prime_number(int, int);

int main(void) {

	int N, num, cnt = 0, max = 0, mnum;

	//1
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);

		cnt = count_prime_number(cnt, num); //4

		if (max < cnt) { //5
			max = cnt;
			mnum = num;
		}
	}

	//6
	if (max == 0)
		printf("%d", max);
	else {
		printf("%d\n", max);
		printf("%d", mnum);
	}

	return 0;
}

//2
int is_prime_number(int num) {

	int isp = 1;

	for (int i = 2; i < num; i++)
		if (num % i == 0)
			isp = 0;

	if (num < 2)
		isp = 0;

	return isp;
}

//3
int count_prime_number(int cnt, int num) {

	if (is_prime_number(num) && num < 100)
		return cnt + 1;
	
	return 0;
}

//11 13 17 19 71 73 74 2 3 5 58 97 89 79 47