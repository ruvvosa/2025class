#include <stdio.h>	
#include <math.h>

int main() {
	double rate;
	double bank;
	int month;

	printf("연금리를 입력하세요: ");
	scanf_s("%lf", &rate);
	printf("예치금을 입력하세요: ");
	scanf_s("%lf", &bank);
	printf("예치기간을 입력하세요(월단위): ");
	scanf_s("%d", &month);

	double month_rate = rate / 100 / 12;
	double result = bank * pow(1 + month_rate, month);
	double interest = result - bank;

	printf("수령 금액\n");
	printf("원금 : %.0f 원\n", bank);
	printf("이자 : %.0f 원\n", interest);
	printf("총액: %.0f 원\n", result);



}