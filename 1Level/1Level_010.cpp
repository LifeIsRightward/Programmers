#include <iostream>
// 부족한 금액 계산하기
using namespace std;

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long TotalUsePrice = 0;

    for (int i = 1; i <= count; i++) {
        TotalUsePrice += (price * i);
    }
    cout << TotalUsePrice << endl;

    if (money >= TotalUsePrice) {
        answer = 0;
    } else {
        answer = (money - TotalUsePrice) * -1;
    }

    return answer;
}