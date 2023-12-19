#include <iostream>
#include <string>
#include <vector>
// ºÐ¼öÀÇ µ¡¼À
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    vector<int> bvec;
    vector<int> tvec;
    bool flag = true;

    int bottom = denom1 * denom2;
    int top = (numer1 * denom2) + (numer2 * denom1);

    for (int i = 1; i <= bottom; i++) {
        if ((bottom % i) == 0) {
            bvec.push_back(i);
            cout << "i: " << i << endl;
        }
        // cout << "bvec[" << i <<"]: " << bvec[i] << endl;
    }

    for (int p = 1; p <= top; p++) {
        if ((top % p) == 0) {
            tvec.push_back(p);
            cout << "p: " << p << endl;
        }
        // cout << "tvec[" << p <<"]: " << tvec[p] << endl;
    }

    int max = 0;
    for (int j = 0; j < bvec.size(); j++) {
        for (int a = 0; a < tvec.size(); a++) {
            if (bvec[j] == tvec[a]) {
                if (max < tvec[a]) {
                    max = tvec[a];
                }
            }
        }
    }
    top /= max;
    bottom /= max;

    answer.push_back(top);
    answer.push_back(bottom);
    return answer;
}