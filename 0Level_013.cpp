#include <string>
#include <vector>
// 마지막 두 원소
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = num_list;

    int size = num_list.size();
    int last = num_list[size - 1];
    int beforelast = num_list[size - 2];
    if (last - beforelast <= 0) {
        answer.push_back(last * 2);
    } else {
        answer.push_back(last - beforelast);
    }
    return answer;
}