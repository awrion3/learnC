#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� �� �������� ����/*/
int aA, aB, aC;

int count_strike(int, int, int);
int count_ball(int, int, int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int gA, gB, gC;

	scanf("%d%d%d", &aA, &aB, &aC);

	scanf("%d%d%d", &gA, &gB, &gC);

	/*���� �� ��� �� ���*/
	while (!(aA == gA && aB == gB && aC == gC)) {

		printf("%dS%dB\n", count_strike(gA, gB, gC), count_ball(gA, gB, gC));

		scanf("%d%d%d", &gA, &gB, &gC);
	}

	printf("%dS%dB\n", count_strike(gA, gB, gC), count_ball(gA, gB, gC));

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int count_strike(int a, int b, int c) {
	
	int x = 0;

	if (aA == a)
		x += 1;
	if (aB == b)
		x += 1;
	if (aC == c)
		x += 1;
	
	return x;
}
int count_ball(int a, int b, int c) {

	int y = 0;

	if (aA == b || aA == c)
		y += 1;
	if (aB == a || aB == c)
		y += 1;
	if (aC == a || aC == b)
		y += 1;

	return y;
}

