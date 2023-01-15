# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCP(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);

	return cen;
}

int main(void)
{
	Point curPos = GetCP();
	ShowPosition(curPos);

	return 0;
}