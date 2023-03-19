#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int y1, y2, m1, m2, d1, d2;

	scanf("%d/%d/%d", &y1, &m1, &d1);
	scanf("%d/%d/%d", &y2, &m2, &d2);

	if (y1 == y2 && m1 == m2 && d1 == d2)
		printf("%d/%02d/%02d*\n", y1, m1, d1);

	if (y1 > y2 || (y1 == y2 && (m1 > m2 || (m1 == m2 && d1 > d2))))
		printf("%d/%02d/%02d\n", y2, m2, d2);
	if (y1 < y2 || (y1 == y2 && (m1 < m2 || (m1 == m2 && d1 < d2))))
		printf("%d/%02d/%02d\n", y1, m1, d1);

	return 0;
}