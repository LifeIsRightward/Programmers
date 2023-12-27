#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
// �Ҽ�ã�� - �����佺�׳׽��� ä
using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 0;
    // true -> �Ϲ��� �Ҽ���� ��(���ʿ� true��� ������ ����, �Ҽ��� �ƴѰ͵��� false�� �ٲٱ� ����)
    vector<bool> check(n + 1, true);

    // 1�ܰ� - 0 �����
    check[0] = false;
    // 2�ܰ� - �ռ����� �ƴ� 1 �����
    check[1] = false;

    // 3�ܰ� ~ �Ҽ��� ����� n���� Ž���ϰ� ����.
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

// �̰� �˰����� ������ Ÿ�ӿ��� �� ����

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

// �����佺�׳׽��� ä ��� �˰����� ���� - �̰� �Ҽ��� ����� �˰�����.
// �ٵ� �̰͵� ������ Ŀ���� �����. �ɷ����� �Ҽ��� ������ ���ǰ� �������ŵ� ����
// vector<int> ncopyvec;

//     //n������ ���� ����� - ���� 0,1�� ������ϴµ� �װ� ���Ŀ� �����غ���
//     for(int i = 1; i<=n; i++){
//         ncopyvec.push_back(i);
//     }
//     //1�� ����
//     ncopyvec.erase(remove(ncopyvec.begin(),ncopyvec.end(),1),ncopyvec.end());

//     //2,3,5,7 �� ��� ����(2,3,5,7�� ����� ����)
//     //2,3,5,7�� �־�����ϱ⶧����(�Ҽ��ϱ�) ����ó�� ����
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