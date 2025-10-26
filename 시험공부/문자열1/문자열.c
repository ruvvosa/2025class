#include <stdio.h>
#include <string.h>

int main() {
	char a[] = "Hello";
	char b[] = { 'h','e','l','l','o','\0' };

	char c[100] = "Hello world";
	strcpy_s(c,sizeof(c),"eorld");
	strncpy_s(c, sizeof(c), "Werld", 3);
	printf("%s", c);

	//strncpy_s는 세 번째 인자 "World"에서 앞 3글자 "Wor"만 복사하고, 그 뒤에 자동으로 널 종료 문자 \0를 붙입니다. 즉, c는 다음과 같이 바뀝니다:

}