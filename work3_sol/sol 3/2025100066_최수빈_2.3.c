#include <stdio.h>	
#include <math.h>

int main() {
	double rate;
	double bank;
	int month;

	printf("���ݸ��� �Է��ϼ���: ");
	scanf_s("%lf", &rate);
	printf("��ġ���� �Է��ϼ���: ");
	scanf_s("%lf", &bank);
	printf("��ġ�Ⱓ�� �Է��ϼ���(������): ");
	scanf_s("%d", &month);

	double month_rate = rate / 100 / 12;
	double result = bank * pow(1 + month_rate, month);
	double interest = result - bank;

	printf("���� �ݾ�\n");
	printf("���� : %.0f ��\n", bank);
	printf("���� : %.0f ��\n", interest);
	printf("�Ѿ�: %.0f ��\n", result);



}