#include <string>
#include <vector>
// 문자열의 앞의 n글자
using namespace std;

string solution(string my_string, int n)
{
    string answer = "";
    for (int i = 0; i < n; i++)
    {
        answer.push_back(my_string[i]);
    }
    return answer;
}