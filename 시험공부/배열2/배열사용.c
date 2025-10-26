#include <stdio.h>

int main() {
	int num[10];
	int i, n, sum = 0;
	float averge;

	printf("Enter total number of numbers you will type");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Type numebr:");
		scanf_s("%d", &num[i]);
		sum +=  num[i];
	}

	averge = (float)sum / n;
	printf("Average = %.3f", averge);

}