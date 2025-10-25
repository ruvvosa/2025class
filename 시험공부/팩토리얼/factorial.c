#include <stdio.h>

int main() {
	int n, i;
	unsigned long fact = 1; //for 많은 범위,팩토리얼은 항상 양수
	printf("enter an intger");
	scanf_s("%d", &n);
	if (n < 0)
		printf("에러 음수 입니다");
	else
	{
		for (i = 1; i <= n; i++) {
			fact *= i;
		}
		printf("factorail of %d = %lu", n, fact); //lu쓰기
	}
}