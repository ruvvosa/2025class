#include <stdio.h>	

int main() {
	int a = 9, b = 4, c;
	c = a + b;
	printf("a+b = %d \n", c);
	printf("a-b = %d \n", a - b);
	c = a * b;
	printf("a*b = %d\n", c);
	c = a / b;
	printf("a/b = %d\n", c);
	c = a % b;
	printf("a%%b = %d\n", c); //주의 %% 두번 쓰기

}