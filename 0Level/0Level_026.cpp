#include <iostream>
// 특수문자 출력하기
using namespace std;
// 문자열을 통해서 특수문자를 출력할 때, 주의해서 사용해야할 것이 있다.
// 큰따옴표 " , 작은 따옴표 ' , 역슬래시 \ 는 앞에 역슬래시 \ 를 한 번 붙여야한다.
int main(void) {
    cout << "!@#$%^&*(\\\'\"<>?:;";
    return 0;
}