#include <stdio.h>

int main(){
    int x, y, sub, small;
    printf("x와 y의 값을 입력하세요");
    scanf("%d %d", &x, &y);

    if(x>y){
        sub = x - y;
        small = y;
        printf("차이: %d, 작은값: %d", sub, small);
    }
    else if(x<y){
        sub = y -x;
        small = x;
        printf("차이 : %d, 작은값 : %d", sub, small);
    }
    else{
        printf("두값은 같습니다");
    }
    return 0;
}