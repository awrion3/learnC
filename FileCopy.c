#include <stdio.h>

int main(void)
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;								//char str[20];

	if (src == NULL || des == NULL) {
		puts("File Open Failed!");
		return -1;
	}
	while ((ch = fgetc(src)) != EOF)    //while (fgets(str, sizeof(str), src) != NULL)
		fputc(ch, des);                 //	  fputs(str, des);

	if (feof(src) != 0)
		puts("File Copied!");
	else
		puts("File Copy Failed!");

	fclose(src);
	fclose(des);

	return 0;
}