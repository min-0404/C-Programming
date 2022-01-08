// 2번 문제
// 엔터키가 눌러질때까지 사용자로부터 문자열을 입력받고
// 문자열에 포함된 단어들을 역순으로 출력하는 프로그램을 작성해라
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << "문자열을 입력하세요 : ";
    getline(cin, s, '\n');

    for(int i = s.length() - 1; i >= 0; i--)
        cout << s[i] << " ";
}

