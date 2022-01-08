#include <stdio.h>

int main(){
    int number;
    printf("정수를 입력");
    scanf_s("%d", &number);

    number = ~number; // 부호 반대로
    number++;

    printf("결과:%d", number);
    return 0;
}