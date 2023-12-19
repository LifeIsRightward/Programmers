#include <string>
#include <vector>
// 원소들의 곱과 합
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int times = 1;
    int square = 0;
    for (int i = 0; i < num_list.size(); i++) {
        times *= num_list[i];
        square += num_list[i];
    }

    square = square * square;

    if (times < square) {
        answer = 1;
    } else {
        answer = 0;
    }
    return answer;
}