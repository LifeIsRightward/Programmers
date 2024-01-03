#include <string>
#include <vector>
// 콜라츠 수열 만들기
using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;
    bool flag = true;

    answer.push_back(n);
    while (flag)
    {
        if (n == 1)
        {
            flag = false;
        }
        else if (n % 2 == 0)
        {
            n /= 2;
            answer.push_back(n);
        }
        else if (n % 2 != 0)
        {
            n = (n * 3) + 1;
            answer.push_back(n);
        }
    }
    return answer;
}