#include <string>
#include <vector>
// �迭 ����� 1(����)
using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int times = n / k;
    for (int i = 1; i <= times; i++) {
        answer.push_back(k * i);
    }
    return answer;
}