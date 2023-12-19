#include <iostream>
#include <string>
#include <vector>
// l로 만들기
using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < myString.size(); i++) {
        // cout << myString[i] << endl;
        if (myString[i] < 'l') {
            cout << myString[i] << endl;
            myString[i] = 'l';
        }
    }
    answer = myString;
    return answer;
}