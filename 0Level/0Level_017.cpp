#include <string>
#include <vector>
// 카운트 다운
using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer;
    for (int i = start; i >= end_num; i--) {
        answer.push_back(i);
    }
    return answer;
}