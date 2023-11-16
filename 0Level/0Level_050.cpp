#include <string>
#include <vector>
#include <iostream>
// 이어 붙인 수
using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    string even;
    string odd;
    int e;
    int o;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            even += to_string(num_list[i]);
        }
        else
        {
            odd += to_string(num_list[i]);
        }
    }
    cout << "even: " << even << " odd: " << odd << endl;
    e = stoi(even);
    o = stoi(odd);
    cout << "e: " << e << " o: " << o << endl;
    answer = e + o;

    return answer;
}