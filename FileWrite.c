#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("cannot open file!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fputs("Hello! \n", fp);

	fclose(fp);

	return 0;
}