#include <string>
#include <vector>
// 문자 반복 출력하기
// string type도 push_back()이 가능하다. 처음 앎
using namespace std;

string solution(string my_string, int n) {
    string answer;

    for (int i = 0; i < my_string.length(); i++) {
        for (int j = 0; j < n; j++) {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}