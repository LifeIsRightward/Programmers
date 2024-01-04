#include <string>
#include <vector>
#include <algorithm>
// 없는 숫자 더하기
using namespace std;

int solution(vector<int> numbers)
{
    int answer = -1;
    int total = 0; // 0 - 9 까지의 합: 45
    int count = 0; // numbers 배열에 존재하는 값들의 합
    vector<int> ZeroToNine;

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i <= 9; i++)
    {
        ZeroToNine.push_back(i);
        total += i;
    }

    for (auto a : numbers)
    {
        for (int i = 0; i < ZeroToNine.size(); i++)
        {
            if (a == ZeroToNine[i])
            {
                count += a;
            }
        }
    }

    answer = total - count;
    return answer;
}