#include <string>
#include <vector>
// �������� 1�� �Ǵ� �� ã��
using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 1;
    while (true) {
        if (n % x == 1) {
            answer = x;
            break;
        }
        x++;
    }
    return answer;
}