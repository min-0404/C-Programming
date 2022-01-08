// 1번 문제
// 키보드에서 20개의 문자를 입력받은 후에,
// 이를 역순으로 출력하는 프로그램을 포인터를 이용해 작성해라
#include <iostream>
using namespace std;

int print_reverse(char* a){
    for(int i = 19; i >= 0; i--)
        cout << a[i] << " ";
}


int main(){
    char list[20];
    for(int i = 0; i < 20; i++)
        cin >> list[i]; 
    
    print_reverse(list);
    
}