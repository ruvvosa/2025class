#include <stdio.h>
int a = 5; //전역변수 나머지 다 지역
int main() {
	printf("0. %d\n", a++); //5
	int a = 10;
	{
		printf("1. %d\n", a++); //10
		int a = 20;
		printf("2. %d\n", a++); //20
		{
			printf("3. %d\n", a++); //21
		}
		printf("4. %d\n", a++); //22

	}
	printf("5.%d\n", a); //11 
}
/*

- printf("5.%d\n", a); 는** main 함수 안에서 선언된 지역 변수 int a = 10; **를 참조합니다.
- 그 지역 변수는 1.에서 a++ 되어 11이 되었고,
-이후 블록 안에서 새로 선언된 int a = 20; 은 그 블록 안에서만 유효합니다.
- 따라서 5.에서 출력되는 a는 main 함수의 지역 변수 a = 11입니다.

*/
