#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
// �ֺ� ���ϱ�
using namespace std;

// array�� i��° �ε����� ���� -> arr�迭�� �ε����� ����Ͽ� ++ ��Ű��
// �ش� �ε����� array�� ����(��) ���װ�, �ε����� �ش��ϴ� ���� +1 ���Ѽ� �󵵼��� �ɰ��̴�.
int solution(vector<int> array) {
    int answer = 0;
    int arr[1001];
    fill_n(arr, 1001, 0); // �迭�� 0���� �ʱ�ȭ�ϱ� ����
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

    // �ֺ��� �������� ��� ó��
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