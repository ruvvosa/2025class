#include <stdio.h>

int main() {
	int a[5]; //배열선언
	int b[5] = { 1,2,3,4,5 };//선언과 동시 값 할당
	int c[] = { 1,3,4,5,6,7,7 };//할당값에 따라 크기 자동지정
	int size = sizeof(a) / sizeof(a[0]);

	printf("size = %d", size); //5
}