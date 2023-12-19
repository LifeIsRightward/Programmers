#include <iostream>
#include <string>
#include <vector>
// 홀짝에 따라 다른 값 반환하기
using namespace std;

int solution(int n) {
    int answer = 0;

    if ((n % 2) == 0) {
        int i = 1;
        while (i <= n) {
            if (i % 2 == 0) {
                answer += i * i;
                cout << answer << endl;
            }
            i++;
        }
    } else {
        int k = 1;
        while (k <= n) {
            if ((k % 2) != 0) {
                answer += k;
                cout << answer << endl;
            }
            k++;
        }
    }
    return answer;
}