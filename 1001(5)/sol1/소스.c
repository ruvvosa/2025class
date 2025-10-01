#include <stdio.h>

//함수는 먼저 정의한 후 함수명을 사용하여 호출해서 사용
int sub(int, int); //프로토타입 선언

int add(int a,int b) { //매개변수(parameters)
	int sum = a + b; 
	return (sum);

}
int main() {

	int	result = add(1,4); //인수(argument)
	printf("%d\n", result);
	
	printf("%d", sub(3, 4)); 


}

int sub(int x, int y) {
	int result = x - y;
	return (result);
}