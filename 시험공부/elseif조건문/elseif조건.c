#include <stdio.h>

int main() {
	int score;
	printf("enter your score");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("Your socre = %d, \t Your grade: A\n", score);
	}
	else if (score >= 80) {
		printf("Your socre = %d, \t Your grade: B\n", score);

	}
	else if (score >= 60) {
		printf("Your socre = %d, \t Your grade: A\n", score);

	}
	else {
		printf("failed\n");
	}

	printf("end");
}