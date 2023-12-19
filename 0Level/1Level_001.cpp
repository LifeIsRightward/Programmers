#include <string>
#include <vector>
// 짝와 홀수
using namespace std;

string solution(int num)
{
    string answer = "";
    if (num % 2 == 0)
    {
        answer = "Even";
    }
    else
    {
        answer = "Odd";
    }
    return answer;
}