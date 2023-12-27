#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// 나누어 떨어지는 숫자 배열
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int> temp;
    for (auto a : arr) {
        if (a % divisor == 0) {
            temp.push_back(a);
        }
    }

    if (temp.empty()) {
        answer.push_back(-1);
    } else {
        sort(temp.begin(), temp.end());
        for (auto a : temp) {
            cout << a << endl;
            answer.push_back(a);
        }
    }

    return answer;
}