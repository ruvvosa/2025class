#include <stdio.h>
int add(int a, int b) {
	int sum = a + b;
	return sum;
}

int sub(int a, int b) {
	return a - b;
}

int AddSub(int a, int b) {
	int tmp1, tmp2, result;
	tmp1 = add(a, b);
	tmp2 = sub(a, b);
	result = tmp1 + tmp2;
	return result;
}
int main() {
	
	int a = 3, b = 5;
	int result;

	printf("add : %d\n", add(a, b));
	printf("sub: %d\n", sub(a, b));

	result = AddSub(a, b);
	printf("Addsub: %d\n", result);
}