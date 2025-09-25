#include <stdio.h>

int main() {
	int a; short b; unsigned int c; long d; long long e;
	float f; double g; long double h;

	printf("size1 %d bytes\n", sizeof(a));
	printf("size2 %d bytes\n", sizeof(b));
	printf("size3 %d bytes\n", sizeof(c));
	printf("size4 %d bytes\n", sizeof(d));
	printf("size5 %d bytes\n", sizeof(e));
	printf("size6 %d bytes\n", sizeof(f));
	printf("size7 %d bytes\n", sizeof(g));
	printf("size8 %d bytes\n", sizeof(h));


}