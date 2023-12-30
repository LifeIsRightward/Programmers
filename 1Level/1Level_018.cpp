#include <string>
#include <vector>
// x만큼 간격이 있는 n개의 숫자
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int copyx = x;
    for (int i = 0; i < n; i++) {
        answer.push_back(x);
        x += copyx;
    }
    return answer;
}