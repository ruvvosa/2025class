#include <stdio.h>

int main() {
	char sentence[1000];
	char sentence_2[1000];
	int len1 = 0, len2 = 0;
	int diff_count = 0;
	int shorter_len, longer_len;

	printf("ù��° ������ �Է��Ͻÿ�\n");
	scanf_s("%[^\n]",sentence, sizeof(sentence));
	getchar();

	printf("�ι�° ������ �Է��Ͻÿ�\n");
	scanf_s("%[^\n]", sentence_2, sizeof(sentence_2));

	//���� ���� ����

	while (sentence[len1] != '\0') {
		len1++;
	}

	while (sentence_2[len2] != '\0') {
		len2++;
	}


	//���� ���� ��
	if (len1 < len2) {
		shorter_len = len1;
		longer_len = len2;
	}
	else {
		shorter_len = len2;
		longer_len = len1;
	}

	//���� ��
	for (int i = 0; i < shorter_len; i++) {
		if (sentence[i] != sentence_2[i]) {
			diff_count++;
		}
	}

	//�� ������ ������ ���ڵ��� �ڵ����� Ʋ�� ������ ����
	diff_count += (longer_len - shorter_len);

	printf("Ʋ�� ���� ��:%d\n", diff_count);


}