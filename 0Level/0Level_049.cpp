#include <string>
#include <vector>
#include <iostream>
// 주사위 게임 2
using namespace std;

int solution(int a, int b, int c)
{
    int answer = 0;
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;

    if ((a == b) && (b == c) && (c == a))
    {
        answer = (a * a2 + b * b2 + c * c2) * (a2 + b2 + c2) * (a + b + c);
        cout << "3Same" << endl;
    }
    else if ((a - b != 0) && (b - c != 0) && (c - a != 0))
    {
        answer = a + b + c;
        cout << "3Diff" << endl;
    }
    else
    {
        answer = (a2 + b2 + c2) * (a + b + c);
    }

    return answer;
}