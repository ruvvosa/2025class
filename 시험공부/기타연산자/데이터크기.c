#include <stdio.h>	
int main() {
	int a; float b; double c; char d;

	printf("size1 : %d bytes\n",sizeof(int)); 
	printf("size2 : %d bytes\n",sizeof(b)); 
	printf("size3 : %d bytes\n",sizeof(a+b)); 
	printf("size4 : %d bytes\n",sizeof(short));
	printf("size5 : %d bytes\n",sizeof(long));
	printf("size6 : %d bytes\n",sizeof(long long));
	printf("size7 : %d bytes\n",sizeof(double));
	printf("size8 : %d bytes\n",sizeof(long double));

}