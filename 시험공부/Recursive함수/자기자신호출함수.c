#include <stdio.h>

//지역변수와 전역변수 중 지역변수가 우선순위에 있다.
long fact(int n) {
	printf("Factorial %d\n", n);
	if (n <= 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}

int main() {
	int n;

	printf("정수를 입력하시오");
	scanf_s("%d", &n);
	printf("%d!은 %d입니다", n, fact(n));
}