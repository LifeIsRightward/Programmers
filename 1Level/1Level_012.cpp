#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ���� ���� �� �����ϱ�
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        answer.push_back(-1); // ���Ϳ� ���� ������ ��� ������ -1 ����
    } else {
        // �̰� ���� �������� ���Ľ�Ű��, ���� ���� ���� �����Ϸ����ߴµ�
        // ������ �ع�����, �ʱ⿡ �־��� ���Ϳ� �ٸ� ������ ���ҵ��� ���̱⶧����
        // �� ����� ���.
        //  for(int i = 0; i<arr.size(); i++){
        //      for(int j = i; j<arr.size() - i -1; j++){
        //          if(arr[j]<arr[j+1]){
        //              int temp = arr[j];
        //              arr[j] = arr[j+1];
        //              arr[j+1] = temp;
        //          }
        //      }
        //  }
        //  arr.pop_back();
        //  for(auto a: arr){
        //      answer.push_back(a);
        //      cout<< a << endl;
        //  }
        int min = arr[0];
        int minIndex = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (min > arr[i]) {
                min = arr[i];
                minIndex = i; // erase�� ���� ����
            }
        }
        arr.erase(arr.begin() + minIndex);
        // arr�� ���ۺ��� + n��° �ε����� �ִ� ����, ���� �� ��ü�� ����
        // �״ϱ� ������ ũ�Ⱑ �����ϰ� ������ ���� �ڿ��ִ� ���Ҹ� �˾Ƽ� �ڵ����� ������ ���ܿ´�.

        // answer���Ϳ� �־��ֱ�
        for (auto a : arr) {
            answer.push_back(a);
            cout << a << endl;
        }
    }

    return answer;
}