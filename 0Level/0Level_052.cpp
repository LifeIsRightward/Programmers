#include <string>
#include <vector>
// 피자 나눠먹기(2) - GCD, LCM
using namespace std;
// 피자가 한 판에 6조각

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int solution(int n)
{
    int answer = 0;
    int lcmanswer = 0;
    if (n >= 6)
    {
        lcmanswer = lcm(n, 6);
    }
    else if (n < 6)
    {
        lcmanswer = lcm(6, n);
    }
    answer = lcmanswer / 6;
    return answer;
}
