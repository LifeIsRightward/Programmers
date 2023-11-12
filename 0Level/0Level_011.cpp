#include <string>
#include <vector>
// n보다 커질 때까지 더하기
using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    int i = 0;
    while (answer <= n) {
        answer += numbers[i];
        i++;
    }
    return answer;
}