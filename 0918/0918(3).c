#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	a = ++b;  //pre
	a = b++;  //post

	printf("%d", a);


	//���迬��
	a = 5;
	b = 5;
	int c = 10;
	printf("%d == %d is %d\n", a, b, a == b);

	//������
	int result = (a == b) && (c > b);
	printf("(a==b) && (c > d) is %d\n", result);

	//���ǿ���
	int f = 5, g;
	g = ((f == 4) ? (3):(2));
	printf("the value of 'g variable is %d\n", g);

	//sizeof������
	//������ ũ�� ��ȯ
	int aa; float bb; double cc; char dd;

	printf("size1: %d is bytes\n", sizeof(aa));
	printf("size1: %d is bytes\n", sizeof(cc));

	//part4





}