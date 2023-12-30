#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// 자연수 뒤집어 배열로 만들기
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    // vector<int> upsorting;

    while (n) {
        answer.push_back(n % 10);
        cout << n % 10 << endl;
        n /= 10;
    }
    // sort(upsorting.rbegin(), upsorting.rend());

    return answer;
}