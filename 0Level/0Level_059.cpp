#include <string>
#include <vector>
// 짝수 홀수 개수
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    vector<int> copyanswer(2, 0);
    for (auto a : num_list) {
        if (a % 2 == 0) {
            copyanswer[0]++;
        } else {
            copyanswer[1]++;
        }
    }
    answer = copyanswer;
    return answer;
}