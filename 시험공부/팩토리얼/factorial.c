#include <stdio.h>

int main() {
	int n, i;
	unsigned long fact = 1; //for ���� ����,���丮���� �׻� ���
	printf("enter an intger");
	scanf_s("%d", &n);
	if (n < 0)
		printf("���� ���� �Դϴ�");
	else
	{
		for (i = 1; i <= n; i++) {
			fact *= i;
		}
		printf("factorail of %d = %lu", n, fact); //lu����
	}
}