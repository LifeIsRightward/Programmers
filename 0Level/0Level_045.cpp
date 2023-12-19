#include <string>
#include <vector>
// 배열 두 배 만들기
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for (int i = 0; i < numbers.size(); i++) {
        answer.push_back(numbers[i] * 2);
    }
    return answer;
}