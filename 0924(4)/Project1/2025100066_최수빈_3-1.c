#include <stdio.h>

int main() {
	int choice, pay, change;
	int select_price;

	while (1) {

		printf("1.��ī�ݶ� 1000��\n");
		printf("2. ���̴� 1500��\n");
		printf("3. Ŀ�� 500��\n");
		printf("4. ���ھ� 1200��\n");


		//��ǰ ���� ���� �ޱ�

		while (1) {
			printf("\nplease Select Item(1~4): ");

			if (scanf_s("%d", &choice) != 1) {
				printf("����!: ���ڰ� �ƴմϴ�.\n");
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
				printf("����! �־��� ���� �������� ���Է� �Ͻÿ�.\n");
			}
		}
		//���� �ݾװ� �ޱ�

		while (1) {
			printf("Payment : ");

			if (scanf_s("%d", &pay) != 1) {
				// ���ڰ� �ƴ� ���
				printf("����!: ���ڰ� �ƴմϴ�\n");
				while (getchar() != '\n');
				continue;
			}

			else if (pay > select_price * 10) {
				printf("����: ���� �ݾ��� �ʹ� Ů�ϴ�.\n");
			}
			else if (pay < select_price) {
				printf("����: ���� �ݾ��� �����մϴ�. ");
			}
			else {
				break;
			}
		}

		change = pay - select_price;
		printf("\nYour Change is the followings !\n");

		// �Ž�����

		int count;

		// 50000����
		count = change / 50000;
		printf("#50,000 : %d\n", count);
		change = change % 50000;

		// 10000����
		count = change / 10000;
		printf("#10,000 : %d\n", count);
		change = change % 10000;

		// 5000����
		count = change / 5000;
		printf("#5,000 : %d\n", count);
		change = change % 5000;

		// 1000����
		count = change / 1000;
		printf("#1,000 : %d\n", count);
		change = change % 1000;

		// 500��
		count = change / 500;
		printf("#500 : %d\n", count);
		change = change % 500;

		// 100��
		count = change / 100;
		printf("#100 : %d\n", count);
		change = change % 100;

		// 10��
		count = change / 10;
		printf("#10 : %d\n", count);
		change = change % 10;

		printf("\n");

	}
}

