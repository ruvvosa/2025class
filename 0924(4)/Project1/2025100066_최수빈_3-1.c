#include <stdio.h>

int main() {
	int choice, pay, change;
	int select_price;

	while (1) {

		printf("1.코카콜라 1000원\n");
		printf("2. 사이다 1500원\n");
		printf("3. 커피 500원\n");
		printf("4. 코코아 1200원\n");


		//상품 선택 정보 받기

		while (1) {
			printf("\nplease Select Item(1~4): ");

			if (scanf_s("%d", &choice) != 1) {
				printf("에러!: 숫자가 아닙니다.\n");
				while (getchar() != '\n');
				continue;
			}

			if (choice == 1) {
				select_price = 1000;
				break;
			}
			else if (choice == 2) {
				select_price = 1500;
				break;
			}
			else if (choice == 3) {
				select_price = 500;
				break;
			}
			else if (choice == 4) {
				select_price = 1200;
				break;
			}
			else {
				printf("에러! 주어진 숫자 범위에서 재입력 하시오.\n");
			}
		}
		//결제 금액값 받기

		while (1) {
			printf("Payment : ");

			if (scanf_s("%d", &pay) != 1) {
				// 숫자가 아닌 경우
				printf("에러!: 숫자가 아닙니다\n");
				while (getchar() != '\n');
				continue;
			}

			else if (pay > select_price * 10) {
				printf("에러: 결제 금액이 너무 큽니다.\n");
			}
			else if (pay < select_price) {
				printf("에러: 결제 금액이 부족합니다. ");
			}
			else {
				break;
			}
		}

		change = pay - select_price;
		printf("\nYour Change is the followings !\n");

		// 거스름돈

		int count;

		// 50000원권
		count = change / 50000;
		printf("#50,000 : %d\n", count);
		change = change % 50000;

		// 10000원권
		count = change / 10000;
		printf("#10,000 : %d\n", count);
		change = change % 10000;

		// 5000원권
		count = change / 5000;
		printf("#5,000 : %d\n", count);
		change = change % 5000;

		// 1000원권
		count = change / 1000;
		printf("#1,000 : %d\n", count);
		change = change % 1000;

		// 500원
		count = change / 500;
		printf("#500 : %d\n", count);
		change = change % 500;

		// 100원
		count = change / 100;
		printf("#100 : %d\n", count);
		change = change % 100;

		// 10원
		count = change / 10;
		printf("#10 : %d\n", count);
		change = change % 10;

		printf("\n");

	}
}

