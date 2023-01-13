#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int GetSpaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			return i;
	}
	return -1;
}

int CompName(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (idx1 != idx2)
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1 + 1]);
	ag2 = atoi(&str2[idx2 + 1]);

	if (ag1 == ag2)
		return 1;
	else
		return 0;
}

int main(void)
{
	char str1[20];
	char str2[20];

	printf("first person: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("second person: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
		puts("Same Name!");
	else
		puts("Not Same Name!");
	
	if (CompAge(str1, str2))
		puts("Same Age!");
	else
		puts("Not Same Age!");

	return 0;
}