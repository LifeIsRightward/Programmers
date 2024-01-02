#include <algorithm>
#include <string>
#include <vector>
using namespace std;
// 수열과 구간 쿼리2 (2차원 벡터)
vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> temp;
    int count = 0;

    for (int i = 0; i < queries.size(); i++) {
        for (int q = queries[i][0]; q <= queries[i][1]; q++) {
            temp.push_back(arr[q]);
        }

        sort(temp.begin(), temp.end());
        for (auto a : temp) {
            if (queries[i][2] < a) {
                answer.push_back(a);
                break;
            } else {
                count++;
            }
        }
        if (count == temp.size()) {
            answer.push_back(-1);
        }
        count = 0;
        temp.clear();
    }

    return answer;
}