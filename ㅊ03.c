#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)//

	/*������ ���� �� �ʱ�ȭ*/
	int N, sum = 0, max, min; //int) 4 byte = 4*8 bit (2^32)

	/*������ �� �Է�*/
	scanf("%d", &N);	 //1//

	max = N; min = N;	 //3//

	/*������ �� ���*/
	while (N != 0) {	 //1//
		sum += N;	 	 //2//

		if (max < N)	 //3//
			max = N;
		if (min > N)	 //3//
			min = N;

		scanf("%d", &N); //1//
	}
	
	/*������ �� ���*/
	printf("%d %d %d", sum, min, max);

	return 0; //main() �Լ��� ��: ���α׷��� ���� ����//
}