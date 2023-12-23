#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 제일 작은 수 제거하기
vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() == 1) {
        answer.push_back(-1); // 벡터에 단일 원소일 경우 무조건 -1 리턴
    } else {
        // 이건 버블 정렬으로 정렬시키고, 가장 낮은 값을 삭제하려고했는데
        // 정렬을 해버리면, 초기에 주어진 벡터와 다른 순서로 원소들이 놓이기때문에
        // 이 방법은 폐기.
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
                minIndex = i; // erase를 쓰기 위함
            }
        }
        arr.erase(arr.begin() + minIndex);
        // arr의 시작부터 + n번째 인덱스에 있는 값과, 벡터 방 자체를 삭제
        // 그니까 벡터의 크기가 감소하고 삭제된 원소 뒤에있는 원소를 알아서 자동으로 앞으로 땡겨온다.

        // answer벡터에 넣어주기
        for (auto a : arr) {
            answer.push_back(a);
            cout << a << endl;
        }
    }

    return answer;
}