#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N; //������ 
	char y; /*����ϱ� ���� ���� ����(�̶� char�� int�� �޸� ������ ũ�� ������, �׷��� char��*/
	scanf("%d", &N); //�Է¹ް�

	y = !(N % 4) ? 'L' : 'C'; //4�� 
	y = !(N % 100) ? 'C' : y; //100���� 
	y = !(N % 400) ? 'L' : y; //400����

	printf("%c", y); /*���� ���� �ڷ����� �� �����Ͽ� ����ϴ� �������� ������ ��*/

	return 0;
}