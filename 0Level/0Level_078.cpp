#include <string>
#include <vector>
// 배열 뒤집기
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for (int i = num_list.size() - 1; i > -1; i--) {
        answer.push_back(num_list[i]);
    }
    return answer;
}