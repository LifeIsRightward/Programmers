#include <iostream>
#include <string>
#include <vector>
// ���� ��ȣ
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto a : s) {
        if (a == ' ') {
            answer.push_back(' ');
        } else {
            if (a > 'Z') {
                answer.push_back((a + n - 'a') % 26 + 'a');
            } else {
                answer.push_back((a + n - 'A') % 26 + 'A');
            }
        }
    }
    return answer;
}