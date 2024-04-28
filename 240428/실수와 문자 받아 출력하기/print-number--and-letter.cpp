#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout.precision(2);

    double a{}, b{};
    char c{};
    cin >> c >> a >> b;

    cout << c << "\n" << a << "\n" << b << "\n";
    return 0;
}