#pragma warning (disable:4996)
#include <stdio.h>

//선언
char decrypt(char, int);

int main(void) {

	char x[10];
	int M;

	for (int i = 0; i < 10; i++)
		scanf("%c", &x[i]);

	scanf("%d", &M);

	for (int i = 0; i < 10; i++)
		printf("%c", decrypt(x[i], M));

	return 0;
}

//정의
char decrypt(char ch, int M) {

	if (ch >= 'A' && ch <= 'Z') {
		M %= 26;
		ch = ch - M < 'A' ? 'Z' + (ch - 'A' - M + 1) : ch - M;
	}
	else if (ch >= 'a' && ch <= 'z') {
		M %= 26;
		ch = ch - M < 'a' ? 'z' + (ch - 'a' - M + 1) : ch - M;
	}
	return ch;
}
//lveocmboox
//10