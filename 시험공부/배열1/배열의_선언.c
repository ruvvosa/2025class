#include <stdio.h>

int main() {
	int a[5]; //�迭����
	int b[5] = { 1,2,3,4,5 };//����� ���� �� �Ҵ�
	int c[] = { 1,3,4,5,6,7,7 };//�Ҵ簪�� ���� ũ�� �ڵ�����
	int size = sizeof(a) / sizeof(a[0]);

	printf("size = %d", size); //5
}