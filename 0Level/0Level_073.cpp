#include <string>
#include <vector>
// 5명씩
using namespace std;

vector<string> solution(vector<string> names)
{
    vector<string> answer;
    int i = 0;
    for (auto a : names)
    {
        if (i % 5 == 0)
        {
            answer.push_back(a);
        }
        i++;
    }
    return answer;
}