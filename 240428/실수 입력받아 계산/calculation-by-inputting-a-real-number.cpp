#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a{}, b{};
    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << a + b << "\n";
    return 0;
}