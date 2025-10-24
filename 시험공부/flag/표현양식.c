#include <stdio.h>	

int main() {
	int num = 10;
	printf("%d\n", num);
	printf("%10d \n", num);
	printf("%-10d\n", num);
	printf("%+10d\n", num);
	printf("%010d\n", num);
	printf("%#10d\n", num);
	printf("%#10o\n", num);
	printf("%#10x\n", num);

}