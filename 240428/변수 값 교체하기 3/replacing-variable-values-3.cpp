#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a = 3, b = 5, tmp = 0;

    tmp = a;
    a = b;
    b = tmp;

    cout << a << "\n" << b << "\n";
    return 0;
}