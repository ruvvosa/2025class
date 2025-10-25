#include <stdio.h>	

int main() {
	int score;
	printf("Enter your score: ");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("Score = %d, \t grade : A\n", score);
	}
	else {
		printf("Score = %d,\t Grade: B\n", score);
	}

	printf("end");

}