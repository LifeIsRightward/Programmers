#include <iostream>
#include <string>
#include <vector>
// 콜라츠 추측
using namespace std;

int solution(int num) {
    int answer = 0;
    int count = 0;
    bool flag = true;

    long long numcopy = num;
    while (flag) {
        if (numcopy == 1) {
            answer = count;
            flag = false;
        } else if ((numcopy % 2) == 0) {
            numcopy /= 2;
            cout << numcopy << endl;
            count++;
        } else if ((numcopy % 2) != 0) {
            numcopy = (numcopy * 3) + 1;
            cout << numcopy << endl;
            count++;
        }

        if (count >= 500) {
            answer = -1;
            flag = false;
        }
    }
    return answer;
}