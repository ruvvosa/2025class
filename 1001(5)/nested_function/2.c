#include <stdio.h>
//Nested 함수(스택에 스택)
int add(int a, int b) { 
	int sum = a + b;
	return (sum);
}

int sub(int x, int y) {
	int result = x - y;
	return (result);
}

int addsub(int a, int b) {
	int tmp1, tmp2, result;
	tmp1 = add(a, b);
	tmp2 = sub(a, b);
	result = tmp1 + tmp2;
	return result;
}
int main() {
	int a = 3, b = 5;
	int result;

	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));

	result = addsub(a, b);
	printf("%d", result);
}