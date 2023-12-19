#include <string>
#include <vector>
// 두 정수 사이의 합
using namespace std;

long long solution(int a, int b)
{
    long long answer = 0;
    if (a > b)
    {
        for (int i = b; i <= a; i++)
        {
            answer += i;
        }
    }
    else if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            answer += i;
        }
    }
    else if (a == b)
    {
        answer = a;
    }

    return answer;
}