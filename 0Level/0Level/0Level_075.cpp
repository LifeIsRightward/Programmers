#include <iostream>
#include <string>
#include <vector>
// 삼각형의 완성 조건(1)
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    vector<int> another;
    int max = 0;

    for (auto a : sides) {
        if (max < a) {
            max = a;
        }
    }

    for (auto b : sides) {
        if (b != max) {
            another.push_back(b);
        }
    }

    while (true) {
        if (another.size() < 2) {
            another.push_back(max);
        } else {
            break;
        }
    }

    if (max < another[0] + another[1]) {
        answer = 1;
    } else {
        answer = 2;
    }
    return answer;
}