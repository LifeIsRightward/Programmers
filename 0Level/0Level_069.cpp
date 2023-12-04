#include <string>
#include <vector>
#include <iostream>
// 최댓값 만들기(1)
using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;
    // 내림 차순으로 버블정렬
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = 0; j < numbers.size() - i - 1; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    answer = numbers[0] * numbers[1];

    return answer;
}