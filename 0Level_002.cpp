#include <string>
#include <vector>
// n 번째 원소까지
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for (int i = 0; i < n; i++) {
        answer.push_back(num_list[i]);
    }
    return answer;
}