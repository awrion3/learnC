#pragma warning (disable:4996)
#include <stdio.h>

//
int A, B, C;
//
int count_strike(int, int, int);
int count_ball(int, int, int);

//
int main(void) {

	int ga, gb, gc;
	scanf("%d%d%d", &A, &B, &C);
	scanf("%d%d%d", &ga, &gb, &gc);

	//
	while (!(A == ga && B == gb && C == gc)) {

		printf("%dS%dB\n", count_strike(ga, gb, gc), count_ball(ga, gb, gc));

		scanf("%d%d%d", &ga, &gb, &gc);
	}

	//
	printf("%dS%dB\n", count_strike(ga, gb, gc), count_ball(ga, gb, gc));

	return 0;
}

//
int count_strike(int ga, int gb, int gc) {

	int cnt = 0;

	cnt = (A == ga) + (B == gb) + (C == gc);

	return cnt;
}
//
int count_ball(int ga, int gb, int gc) {

	int cnt = 0;

	if (A == gb || A == gc)
		cnt++;
	if (B == ga || B == gc)
		cnt++;
	if (C == ga || C == gb)
		cnt++;

	return cnt;
}