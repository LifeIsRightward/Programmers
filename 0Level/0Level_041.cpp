#include <string>
#include <vector>
// 문자열 섞기
using namespace std;

string solution(string str1, string str2)
{
    string answer = "";
    // int size = str1.length() + str2.length();

    for (int i = 0; i < str1.length(); i++)
    {
        answer += str1[i];
        answer += str2[i];
    }
    return answer;
}