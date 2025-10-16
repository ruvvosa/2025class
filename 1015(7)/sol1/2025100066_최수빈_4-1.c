#include <stdio.h>
 
int main() {
	char sentence[10000];
	int char_count = 0;
	int word_count = 0;
	int in_word = 0;
	
	
	//입력
	printf("Type a sentence:");
	scanf_s("%[^\n]", sentence, sizeof(sentence));

	//문자 수,단어 수 계산
	for (int i = 0; sentence[i] != '\0'; i++) {
		char_count++; //문자수 계산

		//단어 수 계산
		if (sentence[i] == ' ' || sentence[i] == '\t') {
			in_word = 0;
		}
		else {
			if (in_word == 0) {
				word_count++;
				in_word = 1;
			}
		}
	}

	printf("%s, %d words, %d characters", sentence, word_count, char_count);

}