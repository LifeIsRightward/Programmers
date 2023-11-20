#include <string>
#include <vector>
#include <iostream>
// 배열의 평균값
using namespace std;

double solution(vector<int> numbers)
{
    double answer = 0;

    for (auto a : numbers)
    {
        answer += a;
    }

    answer = answer / numbers.size();

    cout << answer << endl;
    return answer;
}