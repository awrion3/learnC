#pragma warning(disable:4996)
#include <stdio.h>

//1
char decrypt(char, int);

int main(void) {

	//2
	char arr[10];	
	int M;		

	for (int i = 0; i < 10; i++)
		scanf("%c", &arr[i]);

	scanf("%d", &M);
	
	//3
	for (int i = 0; i < 10; i++)
		printf("%c", decrypt(arr[i], M));

	return 0;
}

//1
char decrypt(char ch, int M) {

	//4
	if (ch >= 'A' && ch <= 'Z') { 
		M %= 26; //알파벳 개수
		ch = ch - M < 'A' ? 'Z' + (ch - 'A' - M + 1) : ch - M; //Y Z A B 
		return ch; //오바되면 Z로 가서 - M 하는데, + ch - 'A' 값(+) + Z ~ A 간격(+)
	}
	else if (ch >= 'a' && ch <= 'z') {
		M %= 26;
		ch = ch - M < 'a' ? 'z' + (ch - 'a' - M + 1) : ch - M;
		return ch;
	}
		
	return ch;
}