#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)//

	/*������ ���� �� �ʱ�ȭ*/
	int N, M, max, sax;

	/*������ �� �Է�*/
	scanf("%d", &N);
	scanf("%d", &M);

	max = M; sax = M; //�ʱ�ȭ//

	N--; //ù��° M �Է¿� ���� N�� �ݺ� ����

	/*������ �� ���*/
	while (N > 0) { //�ݺ� ����
		
		if (max < M)      //M�� max���� ū ���
		{
			sax = max;
			max = M;
		}
		else if (sax < M)  //M�� max���� �۰ų� ������, sax���ٴ� ū ���
			sax = M;

		scanf("%d", &M);

		N--;		//�ݺ� ����
	}

	/*������ �� ���*/
	printf("%d\n%d", max, sax);

	return 0; //main() �Լ��� ��: ���α׷��� ���� ����//
}