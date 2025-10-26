#include <stdio.h>

int main() {
	//int a[5][2] = { {1,2},{3,4},{5,6},{7,8},{9,10} };

	float a[2][2], b[2][2], c[2][2];
	 
	//a matrix generation
	printf("Enter elements of a A matrix\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("Enter a[%d][%d]:", i, j);
			scanf_s("%f", &a[i][j]);
		}
	}

	//b matrix generation
	printf("Enter elements of a B matrix\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("enter b[%d][%d]", i, j);
			scanf_s("%f", &b[i][j]);

		}
	}

	//C = product of A and B matrix

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	//display the result
	printf("\nSum of Matrix:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%.1f\t", c[i][j]);
			if (j == 1)
				printf("\n"); //ÁÙ¹Ù²Þ
		}
	}
}