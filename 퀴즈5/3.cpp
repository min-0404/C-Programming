// 3번 문제
// 사용자에게 영어이름을 성과 이름으로 나누어서 대문자로 입력하도록 해서
// 성과 이름을 바꾸고, 소문자로 변환하여 출력시키기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string first_name;
    string last_name;
    
    cout << "성을 대문자로 입력하세요";
    getline(cin, first_name);
    cout << "이름을 대문자로 입력하세요";
    getline(cin, last_name);
    
    for(int i = 0; i < first_name.length(); i++)
        first_name[i] = tolower(first_name[i]);
    for(int i = 0; i < last_name.length(); i++)
        last_name[i] = tolower(last_name[i]);
    
    string temp = first_name;
    first_name = last_name;
    last_name = temp;
    
    cout << "바뀐 결과:" << first_name << " " << last_name;

    
}