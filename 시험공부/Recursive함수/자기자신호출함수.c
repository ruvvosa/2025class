#include <stdio.h>

//���������� �������� �� ���������� �켱������ �ִ�.
long fact(int n) {
	printf("Factorial %d\n", n);
	if (n <= 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

int main() {
	int n;

	printf("������ �Է��Ͻÿ�");
	scanf_s("%d", &n);
	printf("%d!�� %d�Դϴ�", n, fact(n));
}