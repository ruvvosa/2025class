#include <stdio.h>

int main() {
	int a[] = { 1,2,3,4,9 };
	int size = sizeof(a) / sizeof(a[0]);

	// https://velog.io/@seogoun45/size-of

	printf("%d", size); //크기 출력

	
	float b[2][2], c[2][2], d[2][2];

	//문자열 배열 주의
	char bb[] = { 'h','e','l','l','o','\0' };
	char bb[6] = "hello";


  
}