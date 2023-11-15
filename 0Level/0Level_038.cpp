#include <string>
#include <vector>
// 더 크게 합치기 - tostring(), stoi();
using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    string sa = to_string(a);
    string sb = to_string(b);
    string front = sa + sb;
    string back = sb + sa;
    int fi = stoi(front);
    int bi = stoi(back);
    if (fi > bi)
    {
        answer = fi;
    }
    else if (fi == bi)
    {
        answer = fi;
    }
    else
    {
        answer = bi;
    }

    return answer;
}