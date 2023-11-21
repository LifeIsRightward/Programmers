#include <string>
#include <vector>
#include <iostream>

using namespace std;
// 중앙값 구하기
int solution(vector<int> array)
{
    int answer = 0;
    vector<int> sorted;

    for (int i = 0; i < array.size() - 1; i++)
    {
        for (int j = 0; j < array.size() - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (auto a : array)
    {
        cout << a << endl;
    }

    answer = array[(array.size() - 1) / 2];
    return answer;
}
