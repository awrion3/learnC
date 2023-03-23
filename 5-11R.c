#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    // Declare variables
    int s1, s2, s3, g1, g2, g3;
    int st = 0, bl = 0;

    // Prompt the user to input the secret code
    scanf("%d%d%d", &s1, &s2, &s3);

    // Prompt the user to input their guess
    scanf("%d%d%d", &g1, &g2, &g3);

    // Check for strike
    if (s1 == g1)
        st++;
    if (s2 == g2)
        st++;
    if (s3 == g3)
        st++;

    // Check for ball
    if (s1 == g2 || s1 == g3)
        bl++;
    if (s2 == g1 || s2 == g3)
        bl++;
    if (s3 == g1 || s3 == g2)
        bl++;

    // Output the result
    printf("%dS%dB\n", st, bl);

    return 0;
}
