#include <stdio.h>
//Recursive �Լ�(���� ����������)
long fact(int n) {
	printf("Fact(%d)\n", n);
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int main() {
	int x = 0;
	long n;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &n);
	printf("%d!��%d\n", n, fact(n));
	return 0;

}