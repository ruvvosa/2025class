#include <stdio.h>	

int main() {
	int a, c;
	char b;
	char s[10];
	scanf_s("%9s", s, sizeof(s));
	scanf_s("%d %c %d %s", &a, &b, sizeof(b), sizeof(s));
}