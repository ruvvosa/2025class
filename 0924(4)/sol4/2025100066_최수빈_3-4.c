#include <stdio.h>

int main() {
    int max_num;     // 사용자가 설정한 최대값
    int low = 1, high;   // 범위의 하한과 상한
    int guess;       
    int response;  

    // 최대값 입력받기
    printf("숫자 추측 게임\n");
    printf("사용자가 연상할 수 있는 숫자의 최대값을 입력하세요: ");
    scanf_s("%d", &max_num);

 
    if (max_num < 1) {
        printf("최대값은 1 이상이어야 합니다.\n");
    }

    // 게임 시작
    printf("\n1부터 %d까지의 숫자 중 하나를 마음속으로 생각해 주세요.\n", max_num);
    printf("준비가 되면 아무 키나 입력하세요...");
    getchar(); 
    getchar(); // 사용자 입력 대기

  
    high = max_num;
    

    printf("응답 방법: 1(작다), 2(같다), 3(크다)\n\n");

    // 숫자 맞추기
    while (low <= high) {
        guess = (low + high) / 2;  //이진탐색

        printf("당신이 생각한 숫자는 %d입니까?\n", guess);
        printf("1: %d보다 작다\n", guess);
        printf("2: %d와 같다\n", guess);
        printf("3: %d보다 크다\n", guess);
        printf("선택 (1/2/3): ");

        scanf_s("%d", &response);

        if (response == 2) {
            // 정답
            printf("\n정답입니다! 당신이 생각한 숫자는 %d입니다!\n", guess);
            break;
        }
        else if (response == 1) {
            high = guess - 1;
            printf("알겠습니다. %d보다 작은 숫자군요.\n\n", guess);
        }
        else if (response == 3) {
            low = guess + 1;
            printf("알겠습니다. %d보다 큰 숫자군요.\n\n", guess);
        }
        else {
            printf("잘못된 입력입니다. 1, 2, 3 중에서 선택해 주세요.\n\n");
        }

        if (low > high && response != 2) {
            printf("뭔가 잘못되었습니다. 일관된 답변을 해주세요!\n");
            break;
        }
    }

    
}

