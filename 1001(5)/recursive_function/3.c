#include <stdio.h>
//Recursive 함수(스택 프레임주의)
long fact(int n) {
	printf("Fact(%d)\n", n);
	if (n <= 1)
		return 1;
	else
		return n * fact(n - 1);
}

int main() {
	int x = 0;
	long n;

	printf("정수를 입력하시오:");
	scanf_s("%d", &n);
	printf("%d!은%d\n", n, fact(n));
	return 0;

}