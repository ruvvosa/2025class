#include <stdio.h>

int main() {
	char ch = 's';
	char* strig = "computer";
	int count = 234;
	int hex = 0x10;
	int oct = 010;
	int dec = 10;
	double fp = 251.7366;
	
	printf("Value of count should be 13; count = %d\n\n", count);
	printf("%10c%5c\n", ch, ch);
	printf("%f %.2f %e %E \n\n", fp, fp, fp, fp);
	printf("1234567890123%n1234567890123456789\n\n", &count);

}