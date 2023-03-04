#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int id;
	int age;

	printf("학번과 나이 입력: ");
	scanf("%d %d", &id, &age);
	printf("입력 학번과 나이: %d %d", id, age);

	return 0;
}