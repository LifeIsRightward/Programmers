#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
// 소수찾기 - 에라토스테네스의 채
using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 0;
    // true -> 암묵적 소수라는 뜻(애초에 true라고 상정한 이후, 소수가 아닌것들을 false로 바꾸기 위함)
    vector<bool> check(n + 1, true);

    // 1단계 - 0 지우기
    check[0] = false;
    // 2단계 - 합성수가 아닌 1 지우기
    check[1] = false;

    // 3단계 ~ 소수의 배수를 n까지 탐색하고 제거.
    for (int i = 2; i <= n; i++) {
        if (check[i]) {
            for (int q = i + i; q <= n; q += i) {
                check[q] = false;
            }
            count++;
        }
    }

    answer = count;
    return answer;
}

// 이건 알고리즘이 느려서 타임오버 뜸 ㅇㅇ

// int answer = 0;
//     int count = 0;
//     vector<int> countvec;

//     for(int i = 2; i<=n; i++){
//         for(int j = 2; j<=i; j++){
//             if(count > 1){
//                 break;
//             }else{
//                 if(i%j == 0){
//                     count++;
//                 }
//             }
//         }
//         countvec.push_back(count);
//         count = 0;
//     }

//     for(auto a: countvec){
//         if(a == 1){
//             answer++;
//         }
//     }

// 에라토스테네스의 채 라는 알고리즘이 있음 - 이건 소수만 남기는 알고리즘임.
// 근데 이것도 범위가 커지면 노답임. 걸러야할 소수의 갯수가 좆되게 많아지거든 ㅇㅇ
// vector<int> ncopyvec;

//     //n까지의 방을 만들고 - 물론 0,1은 없어야하는데 그건 추후에 생각해보자
//     for(int i = 1; i<=n; i++){
//         ncopyvec.push_back(i);
//     }
//     //1을 제거
//     ncopyvec.erase(remove(ncopyvec.begin(),ncopyvec.end(),1),ncopyvec.end());

//     //2,3,5,7 의 배수 제거(2,3,5,7은 남기고 ㅇㅇ)
//     //2,3,5,7은 넣어줘야하기때문에(소수니까) 예외처리 해줌
//     for(auto b: ncopyvec){
//         if(b % 2 == 0){
//             if(b != 2){
//                 ncopyvec.erase(remove(ncopyvec.begin(),ncopyvec.end(),b),ncopyvec.end());
//             }
//         }
//     }
//     cout << ncopyvec.size() << endl;
//     for(auto c: ncopyvec){
//         if(c % 3 == 0){
//             if (c != 3){
//                ncopyvec.erase(remove(ncopyvec.begin(),ncopyvec.end(),c),ncopyvec.end());
//             }
//         }
//     }
//     cout << ncopyvec.size() << endl;
//     for(auto d: ncopyvec){
//         if(d % 5 == 0){
//             if (d != 5){
//                ncopyvec.erase(remove(ncopyvec.begin(),ncopyvec.end(),d),ncopyvec.end());
//             }
//         }
//     }
//     cout << ncopyvec.size() << endl;
//     for(auto e: ncopyvec){
//         if(e % 7 == 0){
//             if (e != 7){
//                ncopyvec.erase(remove(ncopyvec.begin(),ncopyvec.end(),e),ncopyvec.end());
//             }
//         }
//     }
//     cout << ncopyvec.size() << endl;

//     answer = ncopyvec.size();