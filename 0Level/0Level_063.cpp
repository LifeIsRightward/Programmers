#include <string>
#include <vector>
// 제곱수 판별하기
using namespace std;

int solution(int n) {
    int answer = 0;
    bool isSquare = false;
    for (int i = 1; i <= 1000000; i++) {
        if (i * i == n) {
            isSquare = true;
            break;
        }
    }
    if (isSquare) {
        answer = 1;
    } else {
        answer = 2;
    }
    return answer;
}