#include <stdio.h>

int main(){
    int result = 0;
    int n = 1;
    while(result < 10000){
        result += n;
        n++;
    }
    if(result > 10000){
        result -= n;
        n -= 1;
    }
    printf("가장 큰 값 : %d, n의 값 : %d \n", result, n);
    return 0;
}