#include <stdio.h>
//°°Àº ·ÎÁ÷ °°Àºµ¥ ÀÏ´Ü °Á ³ÀµÒ
int main() {
	int num, count, sum = 0;
	printf("enter a number = ");
	scanf_s("%d", &num);
	for (count = 1; count <= num; count++) {
		sum += count;
	}
	printf("the partial sum is %d\n", sum);
}