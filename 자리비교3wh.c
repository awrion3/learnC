#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{//�� ���� �ڸ����� ��
    int a, b, c;
    int cnt, n = 1;
    scanf("%d%d%d", &a, &b, &c);

    while (a != 0 && b != 0 && c != 0) {
        if ((a % 10 == b % 10) && (b % 10 == c % 10))
            cnt = 3;
        else if (a % 10 == b % 10 || b % 10 == c % 10 || a % 10 == c % 10)
            cnt = 2;
        else
            cnt = 1;

        a /= 10;
        b /= 10;
        c /= 10;

        printf("%d�� �ڸ����� ���Ͽ� %d�� ����\n", n, cnt);
        n *= 10;
    }

    return 0;
}