#include <stdio.h>

int main() {
	int a, b, c;

	scanf_s("%d", &a);
	scanf_s("%d%d", &a, &b);
	scanf_s("%d %d", &a, &b);
	scanf_s("%d,%d", &a, &b);
	scanf_s("%d + &d", &a, &b);
}