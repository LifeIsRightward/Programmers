#include <string>
#include <vector>
#include <iostream>
// 등차수열의 특정한 항만 더하기
using namespace std;

int solution(int a, int d, vector<bool> included)
{
    int answer = 0;
    vector<int> sum;
    int i = 0;
    bool flag = true;
    // 첫째항 a, 공차가 d 등차수열 include[i]가 i + 1 항을 의미.
    while (i < included.size())
    {
        if (i == 0)
        { // 첫째항
            sum.push_back(a);
            i++;
        }
        else
        {
            a += d;
            sum.push_back(a);
            i++;
        }
    }
    for (int j = 0; j < included.size(); j++)
    {
        if (included[j])
        {
            answer += sum[j];
        }
    }
    return answer;
}