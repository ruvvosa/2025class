#include <stdio.h>

int main() {
	char sentence[1000];
	char sentence_2[1000];
	int len1 = 0, len2 = 0;
	int diff_count = 0;
	int shorter_len, longer_len;

	printf("첫번째 문장을 입력하시오\n");
	scanf_s("%[^\n]",sentence, sizeof(sentence));
	getchar();

	printf("두번째 문장을 입력하시오\n");
	scanf_s("%[^\n]", sentence_2, sizeof(sentence_2));

	//문장 길이 측정

	while (sentence[len1] != '\0') {
		len1++;
	}

	while (sentence_2[len2] != '\0') {
		len2++;
	}


	//문장 길이 비교
	if (len1 < len2) {
		shorter_len = len1;
		longer_len = len2;
	}
	else {
		shorter_len = len2;
		longer_len = len1;
	}

	//문자 비교
	for (int i = 0; i < shorter_len; i++) {
		if (sentence[i] != sentence_2[i]) {
			diff_count++;
		}
	}

	//긴 문장의 나머지 문자들은 자동으로 틀린 것으로 간주
	diff_count += (longer_len - shorter_len);

	printf("틀린 문자 수:%d\n", diff_count);


}