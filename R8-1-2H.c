#pragma warning(disable:4996)
#include <stdio.h>

//1
char decrypt(char, int);
char encrypt(char, int);

int main(void) {

	char arr[100], ch;
	int idx = 0, M1, M2;

	//2
	scanf("%c", &ch);
	while (ch != '*') {
		arr[idx++] = ch;
		scanf("%c", &ch);
	}

	scanf("%d%d", &M1, &M2);

	//4
	for (int i = 0; i < idx; i++)
		printf("%c", decrypt(arr[i], M1));
	printf("\n");

	//5
	for (int i = 0; i < idx; i++)
		printf("%c", encrypt(decrypt(arr[i], M1), M2));

	return 0;
}

//1
char decrypt(char ch, int M) {

	//3
	if (ch >= 'A' && ch <= 'Z') {
		M %= 26;
		ch = ch - M < 'A' ? 'Z' + (ch - 'A' - M + 1) : ch - M;
		return ch;
	}
	else if (ch >= 'a' && ch <= 'z') {
		M %= 26;
		ch = ch - M < 'a' ? 'z' + (ch - 'a' - M + 1) : ch - M;
		return ch;
	}
	return ch;
}

char encrypt(char ch, int M) {

	//6
	if (ch >= 'A' && ch <= 'Z') {
		M %= 26;
		ch = ch + M > 'Z' ? 'A' + (ch - 'Z' + M - 1) : ch + M; //Y Z A B
		return ch;	//A로 넘어가 +M하되, M에 + ch - 'Z'한 값(-) + Z ~ A 간격(-)
	}
	else if (ch >= 'a' && ch <= 'z') {
		M %= 26;
		ch = ch + M > 'z' ? 'a' + (ch - 'z' + M - 1) : ch + M;
		return ch;
	}
	return ch;
}