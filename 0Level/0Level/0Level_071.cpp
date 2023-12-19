#include <string>
#include <vector>
// 점의 위치 구하기
using namespace std;

int solution(vector<int> dot)
{
    int answer = 0;
    int x = dot[0];
    int y = dot[1];
    // x,y 둘 곱해서 양수 -> 1,3 사분면 , 음수 -> 2,4 사분면
    if (x * y > 0)
    {
        if (x > 0)
        { // 1사분면
            answer = 1;
        }
        else
        { // 3사분면
            answer = 3;
        }
    }
    else
    {
        if (x > 0)
        { // 4사분면
            answer = 4;
        }
        else
        { // 2 사분면
            answer = 2;
        }
    }
    return answer;
}