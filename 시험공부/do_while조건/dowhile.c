#include <stdio.h>

int main() {
	double num, sum = 0;
	do {
		printf("Type a number =	");
		scanf_s("%lf", &num); //���� �ڵ� �����ֳ�....lf�Դϴ� ������..
		sum += num;
	} while (num != 0.0);
	printf("Total sum = %.3f", sum);
}