#pragma warning(disable:4996)
#include <stdio.h>

//1 ����
int max_num(int, int);
int min_num(int, int);

int main(void) {

	int arr[100], idx = 0, num;
	int T, S, E, tmp;
	int max, min, f = 0;

	//2 ����
	scanf("%d", &num);
	while (num != 0) {
		arr[idx++] = num;
		scanf("%d", &num);
	}

	//NEW 
	scanf("%d", &T);

	for (int i = 0; i < T; i++) { //NEW

		scanf("%d%d", &S, &E);

		//3 ��ȯ
		for (int i = S, j = E; i < j; i++, j--) { 
			tmp = arr[i];		//0 4	
			arr[i] = arr[j];	//2 3
			arr[j] = tmp;
		}

		//4 ȣ��
		for (int i = S; i <= E; i++) {
			//�ʱ�ȭ
			if (f == 0) {
				max = arr[i];
				min = arr[i];
				f = 1;
			}
			//
			max = max_num(arr[i], max);
			min = min_num(arr[i], min);
		}

		//6 ���
		for (int i = 0; i < idx; i++)
			printf("%d ", arr[i]);
		printf("\n%d %d\n", max, min);

		f = 0; //NEW
	}
	
	return 0;
}

//5 ����
int max_num(int N1, int N2) { //�μ��� �� �����ӿ� ����
	//��
	if (N1 > N2)
		return N1;
	//
	return N2;
}

int min_num(int N1, int N2) {
	//
	if (N1 > N2)
		return N2;
	//
	return N1;
}
//3 81 9 12 4 36 33 91 10 1 0
//3
//3 7 4 5 0 4