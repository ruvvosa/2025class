#include <stdio.h>

int Add(int a, int b);
int CallMax(int a, int b);
void PrtMin(int a, int b);

int main() {
	int a = 3, b = 5;
	int max = CallMax(a, b);
	printf("The Max:%d\n", max);
	printf("the Additon: %d\n", Add(a, b));

	PrtMin(2, 5);
}

int Add(int a, int b) {
	int sum = a + b;
	return sum;
}

int CallMax(int a, int b) {
	int max =  a > b ? a : b;
	return max;
}

void PrtMin(int a, int b) {
	int min = a < b ? a : b;
	 printf("The MIn : %d\n", min);
}