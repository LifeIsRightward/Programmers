#include <string>
#include <vector>
// ù ��°�� ������ ����
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int count = 0;
    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] < 0) {
            answer = i;
            break;
        } else {
            count++;
        }
    }
    if (count == num_list.size()) {
        answer = -1;
    }
    return answer;
}