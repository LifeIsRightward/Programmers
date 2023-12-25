#include <cmath>
#include <string>
#include <vector>
// Á¤¼ö Á¦°ö±Ù
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    for (long long i = 1; i <= sqrt(n); i++) {
        if (i == sqrt(n)) {
            answer = (i + 1) * (i + 1);
            break;
        } else {
            answer = -1;
        }
    }
    return answer;
}