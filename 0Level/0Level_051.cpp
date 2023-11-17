#include <string>
#include <vector>
//  ÇÇÀÚ ³ª´² ¸Ô±â(1)
using namespace std;

int solution(int n) {
    int answer = 0;
    if (n % 7 == 0) {
        answer = n / 7;
    } else {
        answer = (n / 7) + 1;
    }
    return answer;
    return answer;
}