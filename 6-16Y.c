#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i, pri, cnt = 0;

	for (n = 2; n <= 50; n++)
	{
		pri = 1;
		for (i = 2; i < n; i++)
		{
			if (!(n % i))
				pri = 0;
		}  
		if (pri == 1)
		{
			printf(" %d", n);
			cnt += 1;
			if (!(cnt % 5))
				printf("\n");
		}
	}
	return 0;
}
/*
int n, i;

for (n = 2; n <= 50; n++) {  //���� Ư�� ���� ���� ������ �Ҽ� �Ǻ��̶�� ����.//
 i = 2;
 while (i < n && n % i != 0) //������ �������� ��� �ѹ��̶� �߻��� ����.
  	 i++;

 if (i == n)				 //�� ���¿��� �� ������ �������� ���� �ڱ��ڽ��� ��츸 �Ҽ� ���.
	 printf(" %d", n);
}
*/