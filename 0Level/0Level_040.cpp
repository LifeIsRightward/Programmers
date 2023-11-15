#include <string>
#include <vector>
// 문자 리스트를 문자열로 반환하기
using namespace std;

string solution(vector<string> arr)
{
    string answer = "";
    for (int i = 0; i < arr.size(); i++)
    {
        answer += arr[i];
    }
    return answer;
}