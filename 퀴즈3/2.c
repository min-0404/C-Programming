#include <stdio.h>

int main(){
    char letter;
    while(1){
        fflush(stdin); //버퍼 비우기 (엔터키가 버퍼에 남아서 비워줘야함)
        // 애초에 그냥 getchar()쓰면 편함
        printf("영문자입력:");
        scanf("%c", &letter);
        
        if(letter == 'q') break;
        else printf("해당문자의 아스키코드:%d \n",letter);
    }
    return 0;
}