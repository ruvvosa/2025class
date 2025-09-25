#include <stdio.h>

int main(void) {
	float Cel;
	float Fah;
	printf("Celsius Input: ");
	scanf_s("%f", &Cel);
	Fah = (Cel * 9) / 5 + 32;
	printf("Celsius %f degress = Fahrenheit %.2f", Cel, Fah);

}