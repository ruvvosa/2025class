#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char s1[20] = "hello";
	char s2[10] = "world";
	char s3[] = "1234";
	char s4[] = "12.34";

	printf("1. %d\n",strlen(s2));
	printf("2. %d\n",strcmp(s1,s2));
	strcpy_s(s1, sizeof(s1), s2);

	printf("3. %s\n",s1);
	strcat_s(s1,sizeof(s1), s2);
	printf("4. %s\n",s1);
	printf("5. %s,%s, %d\n",s1,s2,strcmp(s1,s2));
	printf("6. %d, %f\n",atoi(s3),atof(s4));

}