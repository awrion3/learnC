#pragma warning (disable:4996)
#include <stdio.h>

//선언
char decrypt(char, int);
char encrypt(char, int);

int main(void) {

	char x[100], ch, idx = 0;
	int M1, M2;

	//
	scanf("%c", &ch);
	while (ch != '*') {
		x[idx++] = ch;
		scanf("%c", &ch);
	}

	scanf("%d%d", &M1, &M2);

	//
	for (int i = 0; i < idx; i++)
		printf("%c", decrypt(x[i], M1));
	printf("\n");

	for (int i = 0; i < idx; i++)
		printf("%c", encrypt(decrypt(x[i], M1), M2));
	printf("\n");

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

char encrypt(char ch, int M) {

	if (ch >= 'A' && ch <= 'Z') {
		M %= 26;
		ch = ch + M > 'Z' ? 'A' + (ch - 'Z' + M - 1) : ch + M;
	}
	else if (ch >= 'a' && ch <= 'z') {
		M %= 26;
		ch = ch + M > 'z' ? 'a' + (ch - 'z' + M - 1) : ch + M;
	}
	return ch;
}
//lveocmboox*
//10 20
//eoxh VFUHHQ #57*
//29 39