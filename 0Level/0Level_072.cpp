#include <string>
#include <vector>

using namespace std;
// 홀수 vs 짝수
int solution(vector<int> num_list)
{
    int answer = 0;
    int sumodd = 0;
    int sumeven = 0;
    bool OddEvenCondition = false;
    for (auto a : num_list)
    {
        if (OddEvenCondition)
        {
            OddEvenCondition = false;
            sumodd += a;
        }
        else
        {
            OddEvenCondition = true;
            sumeven += a;
        }
    }

    if (sumodd > sumeven)
    {
        answer = sumodd;
    }
    else if (sumodd < sumeven)
    {
        answer = sumeven;
    }
    else
    {
        answer = sumodd;
    }
    return answer;
}