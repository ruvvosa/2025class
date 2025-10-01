#include <stdio.h>
//변수의 scope<시험>
int a = 5;
int main() {
	printf("0.%d\n", a++);
	int a = 10;
	{
		printf("1.%d\n", a++);
		int a = 20;
		printf("2.%d\n",a++);
	}
}