#include <stdio.h>	

int main() {
	/**
	/int i;
	for (i = 1; i < 11; i++) {
		printf("%d", i);
	}*/


	// 수열 로직
	int num, count, sum = 0;
	printf("Enter a positive integer");
	scanf_s("%d", &num);
	for (count = 1; count <= num; count++) {
		sum += count;
		printf("result = %d\t", sum);
	}
	printf("Sum = %d", sum);
}
