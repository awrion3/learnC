#include <stdio.h>

int main(void)
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");

	char buf[20];
	int readCnt;								

	if (src == NULL || des == NULL) {
		puts("File Open Failed!");
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("File Copied!");
				break;
			}
			else
				puts("File Copy Failed!");
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);

	return 0;
}