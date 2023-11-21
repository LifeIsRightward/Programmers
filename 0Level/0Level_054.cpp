#include <string>
#include <vector>
// 짝수는 싫어요
using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            answer.push_back(i);
        }
        i++;
    }
    return answer;
}