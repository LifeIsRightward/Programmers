#include <string>
#include <vector>
// 나머지가 1이 되는 수 찾기
using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 1;
    while (true) {
        if (n % x == 1) {
            answer = x;
            break;
        }
        x++;
    }
    return answer;
}