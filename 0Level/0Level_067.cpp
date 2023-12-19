#include <string>
#include <vector>
#include <iostream>
// 머쓱이보다 키 큰 사람
using namespace std;

int solution(vector<int> array, int height)
{
    int answer = 0;
    // 버블 정렬
    //  for(int i = 0; i<array.size(); i++){
    //      for(int j = 0; j<array.size()-i-1; j++){
    //          if(array[j] > array[j+1]){
    //              int temp = array[j];
    //              array[j] = array[j+1];
    //              array[j+1] = temp;
    //          }
    //      }
    //  }

    for (auto a : array)
    {
        cout << a << endl;
        if (a > height)
        {
            answer++;
        }
    }

    return answer;
}