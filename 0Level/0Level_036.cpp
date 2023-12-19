#include <string>
#include <vector>
// 조건 문자열 -> 근데 아직 이해못헸음 ! 이 부분에서 왜 그냥 n <m 이런거 해야하는건지 이해못함
using namespace std;

int solution(string ineq, string eq, int n, int m)
{
    int answer = 0;
    if (ineq == "<" && eq == "=")
    {
        if (n <= m)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }
    else if (ineq == "<" && eq == "!")
    {
        if (n < m)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }
    else if (ineq == ">" && eq == "=")
    {
        if (n >= m)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }
    else if (ineq == ">" && eq == "!")
    {
        if (n > m)
        {
            answer = 1;
        }
        else
        {
            answer = 0;
        }
    }
    return answer;
}
