#include <stdio.h>

int main() {
	int a[2][3][2];
	printf("Enter 12 values: \n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				printf("a[%d][%d][%d]: ", i, j, k);
				scanf_s("%d", &a[i][j][k]);
			}
		}
	}

	printf("Display all values:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 2; k++) {
				printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);

			}
		}
	}
}