#include <string>
#include <vector>
// 문자열 뒤집기
// 아니 string 타입이 push_back()이 되는게 준내 신기하네 ㅋㅋ
using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = my_string.length() - 1; i > -1; i--) {
        answer.push_back(my_string[i]);
    }
    return answer;
}