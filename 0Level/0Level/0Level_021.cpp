#include <string>
#include <vector>
// 수 조작하기 2
using namespace std;

string solution(vector<int> numlog) {
    string answer = "";

    for (int i = 1; i < numlog.size(); i++) {
        if (numlog[i] - numlog[i - 1] == 1) {
            answer.append("w");
        } else if (numlog[i] - numlog[i - 1] == -1) {
            answer.append("s");
        } else if (numlog[i] - numlog[i - 1] == 10) {
            answer.append("d");
        } else if (numlog[i] - numlog[i - 1] == -10) {
            answer.append("a");
        }
    }
    return answer;
}