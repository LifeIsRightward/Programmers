#include <string>
#include <vector>
// ���ڿ� ������
// �ƴ� string Ÿ���� push_back()�� �Ǵ°� �س� �ű��ϳ� ����
using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = my_string.length() - 1; i > -1; i--) {
        answer.push_back(my_string[i]);
    }
    return answer;
}