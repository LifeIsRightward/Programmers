#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// 정수 내림차순으로 배치하기
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> tempvec;
    while (n) {
        tempvec.push_back(n % 10);
        n /= 10;
    }

    // for(auto a: tempvec){
    //     cout << a << endl;
    // }

    // long long max = tempvec[0];
    // for(int i = 0; i<tempvec.size(); i++){
    //     for(int j = i; j<tempvec.size()-i-1; j++){
    //         if(max < tempvec[j]){
    //             int temp = tempvec[j];
    //             tempvec[j] = tempvec[j+1];
    //             tempvec[j+1] = temp;
    //         }
    //     }
    // }

    sort(tempvec.rbegin(), tempvec.rend());

    for (auto a : tempvec) {
        answer = answer * 10 + a;
        cout << a << endl;
    }
    return answer;
}