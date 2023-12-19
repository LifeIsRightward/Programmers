#include <string>
#include <vector>
// 중복된 숫자 개수
using namespace std;

int solution(vector<int> array, int n)
{
    int answer = 0;

    for (auto a : array)
    {
        if (n == a)
        {
            answer++;
        }
    }
    return answer;
}