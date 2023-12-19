#include <string>
#include <vector>
// 문자열 곱하기
using namespace std;

string solution(string my_string, int k)
{
    string answer = "";
    for (int i = 0; i < k; i++)
    {
        answer += my_string;
    }
    return answer;
}