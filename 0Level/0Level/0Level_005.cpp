#include <string>
#include <vector>
// 카운트 업
using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    for (int i = start_num; i <= end_num; i++) {
        answer.push_back(i);
    }
    return answer;
}