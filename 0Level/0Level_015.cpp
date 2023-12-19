#include <string>
#include <vector>
// 수 조작하기 1
using namespace std;

int solution(int n, string control) {
    int answer = 0;
    for (int i = 0; i < control.length(); i++) {
        if (control[i] == 'w') {
            n += 1;
        } else if (control[i] == 's') {
            n -= 1;
        } else if (control[i] == 'd') {
            n += 10;
        } else if (control[i] == 'a') {
            n -= 10;
        }
    }
    answer = n;
    return answer;
}