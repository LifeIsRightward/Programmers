#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// 최빈값 구하기
using namespace std;

// array의 i번째 인덱스의 값을 -> arr배열의 인덱스로 사용하여 ++ 시키면
// 해당 인덱스는 array의 숫자(값) 일테고, 인덱스에 해당하는 값은 +1 시켜서 빈도수가 될것이다.
int solution(vector<int> array) {
    int answer = 0;
    int arr[1001];
    fill_n(arr, 1001, 0); // 배열을 0으로 초기화하기 위함
    int max = 0;
    int index = 0;
    bool duplication = false;
    int dpcount = 0;

    for (int i = 0; i < array.size(); i++) {
        arr[array[i]]++;
    }

    /*for(auto k: arr){
        cout << "arr[" << "] : " << k <<endl;
    }*/

    max = arr[0];
    for (int q = 0; q < 1001; q++) {
        if (max < arr[q]) {
            max = arr[q];
            index = q;
            cout << "max: " << max << endl;
        }
    }

    // 최빈값이 여러개인 경우 처리
    for (auto a : arr) {
        if (max == a) {
            dpcount++;
        }
    }

    if (dpcount > 1) {
        duplication = true;
    } else {
        duplication = false;
    }

    if (duplication) {
        answer = -1;
    } else {
        answer = index;
    }

    return answer;
}