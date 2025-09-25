#include <stdio.h>

//소수인지 판별하는 함수
int Prime(int num) {
	int i;
	if (num < 2) return 0;
	if (num == 2) return 1;
	if (num % 2 == 0) return 0;
	for (i = 3; i * i <= num; i += 2) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char start;  
	int current = 2;
	int count = 0;
	int batch_count = 0;

	printf("Are you ready to check list prime numbers ? (Y/N) ");
	scanf_s(" %c", &start);  

	if (start == 'Y' || start == 'y') {
		// 소수 출력 시작
	}
	else if (start == 'N' || start == 'n') {
		printf("Bye\n");
		return 0;
		
	}
	

	// 소수 출력
	while (1) {
		while (!Prime(current)) {
			current++;
		}
		printf("%d ", current); 
		count++;
		batch_count++;
		current++;

		if (batch_count == 10) {
			printf("\n");
			printf("Continue ? (Y/N) ");
			scanf_s(" %c", &start);  

			if (start == 'N' || start == 'n') {
				printf("Total number of prime numbers found : %d\n", count);
				break;
			}
			else if (start == 'Y' || start == 'y') {
				batch_count = 0;
			}
			else {
				printf("Total number of prime numbers found : %d\n", count);
				break;
			}
		}
	}


}