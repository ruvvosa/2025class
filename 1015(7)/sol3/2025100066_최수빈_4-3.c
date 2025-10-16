#include <stdio.h>
#include <string.h>

int main() {
    char words[1000][50];
    int counts[1000];
    int wordCount = 0;
    char sentence[1000];
    char word[50];
    int i, j, idx, found; //idx �ܾ��� ����
    char c;

    printf("Please input a sentence : ");

    do {
        scanf_s("%[^\n]", sentence, sizeof(sentence));
        getchar();

        if (strcmp(sentence, "q") == 0) {
            break;
        }

        // ���忡�� �ܾ� ����
        idx = 0;
        for (i = 0; i <= strlen(sentence); i++) {
            c = sentence[i];

            // ���ĺ��̸� �ܾ �߰�
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                word[idx++] = c;
            }
            // ���ĺ��� �ƴϰ� �ܾ ������ ����
            else if (idx > 0) {
                word[idx] = '\0';

                // ���� �ܾ� ã��
                found = -1;
                for (j = 0; j < wordCount; j++) {
                    if (strcmp(words[j], word) == 0) {
                        found = j;
                        break;
                    }
                }

                // �ܾ� ��� �Ǵ� ī��Ʈ ����
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

    // �ܾ��� ���
    printf("\n< Dictionary >\n");
    for (i = 0; i < wordCount; i++) {
        printf("%s %d\n", words[i], counts[i]);
    }

    
}