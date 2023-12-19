#include <string>
#include <vector>
// 수박수박수박수박수
using namespace std;

string solution(int n)
{
    string answer = "";
    bool issoo = true;
    for (int i = 0; i < n; i++)
    {
        if (issoo)
        {
            answer += "수";
            issoo = false;
        }
        else
        {
            answer += "박";
            issoo = true;
        }
    }
    return answer;
}