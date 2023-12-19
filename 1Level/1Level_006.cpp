#include <string>
#include <vector>
// 수박수박수박수박수?
using namespace std;
// String의 push_back()은 1바이트만 넣어줌 즉, 한글은 안됨. 2바이트라서. 영어만 가능함 ㅇㅇ
// 근데 그거보다도 utf-8 방식은 3바이트로 인코딩되고, 스트링 특성상 마지막은 null 1 바이트라, 총 4바이트를 집어넣을려고 했던거임
string solution(int n)
{
    string answer = "";
    bool issoo = true;
    for (int i = 0; i < n; i++)
    {
        if (issoo)
        {
            answer += "수";
            issoo = false;
        }
        else
        {
            answer += "박";
            issoo = true;
        }
    }
    return answer;
}