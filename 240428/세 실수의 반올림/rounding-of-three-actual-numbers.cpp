#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a{}, b{}, c{};
    cin >> a >> b >> c;

    cout << fixed;
    cout.precision(3);

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    
    return 0;
}