#include <stdio.h>

int main() {
	double num, sum = 0;
	do {
		printf("Type a number =	");
		scanf_s("%lf", &num); //예제 코드 오류있네....lf입니다 교수님..
		sum += num;
	} while (num != 0.0);
	printf("Total sum = %.3f", sum);
}