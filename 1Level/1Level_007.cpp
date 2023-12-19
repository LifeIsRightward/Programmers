#include <string>
#include <iostream>
using namespace std;
// 문자열 내 p와 y의 개수
bool solution(string s)
{
    bool answer = true;
    int pcount = 0;
    int ycount = 0;

    for (auto a : s)
    {
        if (a == 'p' || a == 'P')
        {
            pcount++;
        }
        else if (a == 'y' || a == 'Y')
        {
            ycount++;
        }
    }
    cout << "pcount: " << pcount << endl;
    cout << "ycount: " << ycount;
    if (pcount != ycount)
    {
        answer = false;
    }
    else if (pcount == ycount)
    {
        answer = true;
    }

    return answer;
}