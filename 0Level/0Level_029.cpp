#include <iostream>
#include <string>
#include <vector>
// 문자열 겹쳐쓰기
using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    int k = 0;
    for (int i = s; i < overwrite_string.length() + s; i++) {
        my_string[i] = overwrite_string[k];
        cout << my_string[i];
        k++;
    }
    answer = my_string;
    return answer;
}