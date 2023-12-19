#include <iostream>
#include <string>
// 대 소문자 바꿔서 출력하기(string)
using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        } else {
            str[i] -= 32;
        }
    }
    cout << str << endl;
    return 0;
}