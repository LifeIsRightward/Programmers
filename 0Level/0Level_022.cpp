#include <string>
#include <vector>
// 1로 만들기
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for (int i = 0; i < num_list.size(); i++) {
        int temp = num_list[i];
        while (temp != 1) {
            if (temp % 2 == 0) {
                temp /= 2;
                answer++;
            } else {
                temp = (temp - 1) / 2;
                answer++;
            }
        }
    }
    return answer;
}