#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// 모의고사
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> sorting;
    vector<int> OneAnswer = {1, 2, 3, 4, 5};
    vector<int> TwoAnswer = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> ThreeAnswer = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int OneCorrect = 0;
    int TwoCorrect = 0;
    int ThreeCorrect = 0;

    for (int i = 0; i < answers.size(); i++) {
        if (OneAnswer[i % 5] == answers[i]) {
            OneCorrect++;
        }
        if (TwoAnswer[i % 8] == answers[i]) {
            TwoCorrect++;
        }
        if (ThreeAnswer[i % 10] == answers[i]) {
            ThreeCorrect++;
        }
    }

    sorting.push_back(OneCorrect);
    sorting.push_back(TwoCorrect);
    sorting.push_back(ThreeCorrect);

    // sort(sorting.rbegin(), sorting.rend());

    // sort를 하면, key - value 가 안맞음(정렬이 되면 원래 인덱스와 value가 맞지 않음 ㅇㅇ).
    int max = sorting[0];
    for (int j = 0; j < sorting.size(); j++) {
        if (max < sorting[j]) {
            max = sorting[j];
        }
    }

    for (int q = 0; q < sorting.size(); q++) {
        if (max == sorting[q]) {
            answer.push_back(q + 1);
        }
    }

    return answer;
}