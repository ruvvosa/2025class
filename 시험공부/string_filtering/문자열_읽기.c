#include <stdio.h>

int main() {

	char s[10];
	scanf_s("%[abc]", s, sizeof(s));

	printf("result = %s", s);
}