#include <string>
#include <vector>
// 숫자 비교하기
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    if (num1 == num2) {
        answer = 1;
    } else {
        answer = -1;
    }
    return answer;
}