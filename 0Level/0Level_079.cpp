#include <string>
#include <vector>
// ���� �ݺ� ����ϱ�
// string type�� push_back()�� �����ϴ�. ó�� ��
using namespace std;

string solution(string my_string, int n) {
    string answer;

    for (int i = 0; i < my_string.length(); i++) {
        for (int j = 0; j < n; j++) {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}