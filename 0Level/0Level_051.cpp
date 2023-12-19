#include <string>
#include <vector>

using namespace std;
// 피자 나눠먹기 (1)
int solution(int n) {
    int answer = 0;
    if (n % 7 == 0) {
        answer = n / 7;
    } else {
        answer = (n / 7) + 1;
    }
    return answer;
    return answer;
}