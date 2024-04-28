#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5, b = 6,  c = 7, tmp = 0;

    tmp = b;
    b = a;
    a = c;
    c = tmp;

    cout << a << "\n" << b << "\n" << c << "\n";
    
    return 0;
}