#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �Լ� ���� ������� 
#include <string.h>				//���ڿ� ó�� �Լ� ���� �������//

int main(void) {

	char str1[81], str2[11]; 
	int i = 0, j = 0, isin = 0, f = 0;

	scanf("%s%s", str1, str2); //���� ���� ���ϹǷ�, scanf() ���

	printf("%d ", strlen(str1)); //ù ��° ���ڿ��� ���� ���

	while (str1[i]) { //�� ���� ������ ������ ����
		while (str2[j++] == str1[i++]) {	//������ ��� �����ϸ� ��	
			if (j == strlen(str2)) {		//�ε����� ���̰� ���� �� Ȯ���ϰ� ���� �ݺ� ����
				isin = 1;
				break;
			}
			f = 1;
		}
		j = 0; //���� �ݺ��� ���� ���� �� j�� �ٽ� ó������ �ؼ� ��

		if (f == 1) {	//�ٸ� �ߺ����ڷ� ����, ���� �ݺ��� �ѹ� ���� ���� ���
			i--;		//i�� ��ĭ �ڷ� ���� �����ϱ�
			f = 0;
		}
	}

	printf("%d", isin);	//Ȯ�� ��� ���

	return 0;
}