#include <stdio.h>

//�Լ��� ���� ������ �� �Լ����� ����Ͽ� ȣ���ؼ� ���
int sub(int, int); //������Ÿ�� ����

int add(int a,int b) { //�Ű�����(parameters)
	int sum = a + b; 
	return (sum);

}
int main() {

	int	result = add(1,4); //�μ�(argument)
	printf("%d\n", result);
	
	printf("%d", sub(3, 4)); 


}

int sub(int x, int y) {
	int result = x - y;
	return (result);
}