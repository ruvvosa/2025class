#include <stdio.h>
#include <string.h>

int main() {
    char words[1000][50];
    int counts[1000];
    int wordCount = 0;
    char sentence[1000];
    char word[50];
    int i, j, idx, found; //idx 단어의 길이
    char c;

    printf("Please input a sentence : ");

    do {
        scanf_s("%[^\n]", sentence, sizeof(sentence));
        getchar();

        if (strcmp(sentence, "q") == 0) {
            break;
        }

        // 문장에서 단어 추출
        idx = 0;
        for (i = 0; i <= strlen(sentence); i++) {
            c = sentence[i];

            // 알파벳이면 단어에 추가
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                word[idx++] = c;
            }
            // 알파벳이 아니고 단어가 있으면 저장
            else if (idx > 0) {
                word[idx] = '\0';

                // 기존 단어 찾기
                found = -1;
                for (j = 0; j < wordCount; j++) {
                    if (strcmp(words[j], word) == 0) {
                        found = j;
                        break;
                    }
                }

                // 단어 등록 또는 카운트 증가
                if (found != -1) {
                    counts[found]++;
                }
                else {
                    strcpy_s(words[wordCount], sizeof(words[wordCount]), word);
                    counts[wordCount] = 1;
                    wordCount++;
                }

                idx = 0;
            }
        }

        if (strcmp(sentence, "q") != 0) {
            printf("Continue ?(Press 'q' to quit.) ");
        }
    } while (strcmp(sentence, "q") != 0);

    // 단어장 출력
    printf("\n< Dictionary >\n");
    for (i = 0; i < wordCount; i++) {
        printf("%s %d\n", words[i], counts[i]);
    }

    
}