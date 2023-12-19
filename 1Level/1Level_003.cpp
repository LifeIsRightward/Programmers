#include <string>
#include <vector>
#include <iostream>
// 하샤드 수
using namespace std;

bool solution(int x)
{
    bool answer = true;
    int copyx = x;
    int sum_split = 0;
    vector<int> split;
    while (x)
    {
        split.push_back(x % 10);
        x /= 10;
    }

    for (auto a : split)
    {
        sum_split += a;
    }
    // cout << sum_split;
    if (copyx % sum_split == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}