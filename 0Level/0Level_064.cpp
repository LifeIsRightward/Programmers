#include <string>
#include <vector>

using namespace std;
// n의 배수 고르기
vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for (auto a : numlist) {
        if (a % n == 0) {
            answer.push_back(a);
        }
    }
    return answer;
}