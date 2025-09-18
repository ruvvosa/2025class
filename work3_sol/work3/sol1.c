#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, d, e, f, g, h, i, j;
	printf("숫자를 5개씩 2회에 걸쳐 입력하시오.\n");
	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
	scanf_s("%f%f%f%f%f", &f, &g, &h, &i, &j);
	float avg = (a + b + c + d + e + f + g + h + i + j) / 10.0;
	float var = (pow(a - avg, 2) + pow(b - avg, 2) + pow(c - avg, 2) + pow(d - avg, 2) + pow(e - avg, 2) + pow(f - avg, 2) + pow(g - avg, 2) + pow(h - avg, 2) + pow(i - avg, 2) + pow(j - avg, 2)) / 10.0;

	printf("평균 : %.3f 분산 : %.3f", avg, var);


}