#include <stdio.h>
int is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}


int main(){
    printf("2부터 100사이의 모든 소수 출력하기");
    for(int i = 2; i < 100; i++){
        if(is_prime(i) == 1)
            printf("%d \t", i);   
    }
}