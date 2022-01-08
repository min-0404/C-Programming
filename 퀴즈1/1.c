#include <stdio.h>

int main(){
    int a, b, c, d, x, y;
    printf("10진수 숫자 네개를 입력하세요");
    scanf_s("%d %d %d %d", &a, &b, &c, &d);

    x = a + b + c + d;
    y = a * b * c * d;
    printf("합: %d, 곱: %d", x, y);
    return 0;
}