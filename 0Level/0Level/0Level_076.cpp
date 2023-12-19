#include <string>
#include <vector>
// 왼쪽 오른쪽
using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int temp = 0;
    bool isl = false;
    bool nothing = true;
    for (int i = 0; i < str_list.size(); i++) {
        if (str_list[i] == "l") {
            temp = i;
            isl = true;
            nothing = false;
            break;
        } else if (str_list[i] == "r") {
            temp = i;
            isl = false;
            nothing = false;
            break;
        }
    }
    if (isl && !nothing) {
        for (int a = 0; a < temp; a++) {
            answer.push_back(str_list[a]);
        }
    } else if (!isl && !nothing) {
        for (int a = temp + 1; a < str_list.size(); a++) {
            answer.push_back(str_list[a]);
        }
    }
    return answer;
}