#include <string>
#include <vector>
// ���� ū �� ã��
using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer(2, 0);
    int max = array[0];
    for (int i = 0; i < array.size(); i++) {
        if (max < array[i]) {
            max = array[i];
            answer[0] = array[i];
            answer[1] = i;
        }
    }
    return answer;
}