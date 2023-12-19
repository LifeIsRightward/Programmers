#include <string>
#include <vector>
// 세균 증식
using namespace std;

int solution(int n, int t)
{
    int answer = 0;
    answer = n;
    for (int i = 0; i < t; i++)
    {
        answer *= 2;
    }
    return answer;
}