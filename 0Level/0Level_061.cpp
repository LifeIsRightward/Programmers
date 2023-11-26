#include <iostream>

using namespace std;
// 직각삼각형 출력하기
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}