#include <iostream>
#include <math.h>
#include <string>
#include <vector>
// µÎ ¼öÀÇ ³ª´°¼À
using namespace std;

int solution(int num1, int num2) {
    int answer;
    float z = (float)num1 / (float)num2 * 1000;
    // cout << floor(z);
    answer = (int)z;
    return answer;
}