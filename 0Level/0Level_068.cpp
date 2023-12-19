#include <string>
#include <vector>
#include <iostream>
// 옷가게 할인 받기
using namespace std;

int solution(int price)
{
    int answer = 0;
    if (price >= 100000 && price < 300000)
    {
        answer = price - (price * 0.05);
    }
    else if (price >= 300000 && price < 500000)
    {
        answer = price - (price * 0.1);
    }
    else if (price >= 500000)
    {
        cout << "price" << endl;
        answer = price - (price * 0.2);
    }
    else
    {
        answer = price;
    }
    return answer;
}