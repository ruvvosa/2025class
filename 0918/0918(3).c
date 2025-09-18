#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	a = ++b;  //pre
	a = b++;  //post

	printf("%d", a);


	//관계연산
	a = 5;
	b = 5;
	int c = 10;
	printf("%d == %d is %d\n", a, b, a == b);

	//논리연산
	int result = (a == b) && (c > b);
	printf("(a==b) && (c > d) is %d\n", result);

	//조건연산
	int f = 5, g;
	g = ((f == 4) ? (3):(2));
	printf("the value of 'g variable is %d\n", g);

	//sizeof연산자
	//데이터 크기 반환
	int aa; float bb; double cc; char dd;

	printf("size1: %d is bytes\n", sizeof(aa));
	printf("size1: %d is bytes\n", sizeof(cc));

	//part4





}