#include <string>
#include <vector>
// x��ŭ ������ �ִ� n���� ����
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