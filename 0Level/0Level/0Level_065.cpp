#include <string>
#include <vector>
// 짝수의 합
using namespace std;

int solution(int n)
{
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            answer += i;
        }
    }
    return answer;
}