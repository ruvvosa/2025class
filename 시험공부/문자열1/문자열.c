#include <stdio.h>
#include <string.h>

int main() {
	char a[] = "Hello";
	char b[] = { 'h','e','l','l','o','\0' };

	char c[100] = "Hello world";
	strcpy_s(c,sizeof(c),"eorld");
	strncpy_s(c, sizeof(c), "Werld", 3);
	printf("%s", c);

	//strncpy_s�� �� ��° ���� "World"���� �� 3���� "Wor"�� �����ϰ�, �� �ڿ� �ڵ����� �� ���� ���� \0�� ���Դϴ�. ��, c�� ������ ���� �ٲ�ϴ�:

}