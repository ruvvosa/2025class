#include <stdio.h>

int main(void) {
	float num;
	printf("Type a floating number: ");
	scanf_s("%f", &num);
	printf("Your floating number = %.4f \n",num);
	return 0;
}