#include <stdio.h>

int main() {
    int max_num;     // ����ڰ� ������ �ִ밪
    int low = 1, high;   // ������ ���Ѱ� ����
    int guess;       
    int response;  

    // �ִ밪 �Է¹ޱ�
    printf("���� ���� ����\n");
    printf("����ڰ� ������ �� �ִ� ������ �ִ밪�� �Է��ϼ���: ");
    scanf_s("%d", &max_num);

 
    if (max_num < 1) {
        printf("�ִ밪�� 1 �̻��̾�� �մϴ�.\n");
    }

    // ���� ����
    printf("\n1���� %d������ ���� �� �ϳ��� ���������� ������ �ּ���.\n", max_num);
    printf("�غ� �Ǹ� �ƹ� Ű�� �Է��ϼ���...");
    getchar(); 
    getchar(); // ����� �Է� ���

  
    high = max_num;
    

    printf("���� ���: 1(�۴�), 2(����), 3(ũ��)\n\n");

    // ���� ���߱�
    while (low <= high) {
        guess = (low + high) / 2;  //����Ž��

        printf("����� ������ ���ڴ� %d�Դϱ�?\n", guess);
        printf("1: %d���� �۴�\n", guess);
        printf("2: %d�� ����\n", guess);
        printf("3: %d���� ũ��\n", guess);
        printf("���� (1/2/3): ");

        scanf_s("%d", &response);

        if (response == 2) {
            // ����
            printf("\n�����Դϴ�! ����� ������ ���ڴ� %d�Դϴ�!\n", guess);
            break;
        }
        else if (response == 1) {
            high = guess - 1;
            printf("�˰ڽ��ϴ�. %d���� ���� ���ڱ���.\n\n", guess);
        }
        else if (response == 3) {
            low = guess + 1;
            printf("�˰ڽ��ϴ�. %d���� ū ���ڱ���.\n\n", guess);
        }
        else {
            printf("�߸��� �Է��Դϴ�. 1, 2, 3 �߿��� ������ �ּ���.\n\n");
        }

        if (low > high && response != 2) {
            printf("���� �߸��Ǿ����ϴ�. �ϰ��� �亯�� ���ּ���!\n");
            break;
        }
    }

    
}

