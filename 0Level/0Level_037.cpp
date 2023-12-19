#include <string>
#include <vector>
// 두 수의 연산값 비교하기 - tostring()이랑 stoi() 같은거 쓰는 법
using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    string sa = to_string(a);
    string sb = to_string(b);
    string sanswer = sa + sb;
    int sanswerint = stoi(sanswer);
    if (sanswerint > 2 * a * b)
    {
        answer = sanswerint;
    }
    else if (sanswerint == 2 * a * b)
    {
        answer = sanswerint;
    }
    else
    {
        answer = 2 * a * b;
    }
    return answer;
}