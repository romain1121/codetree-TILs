#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout.precision(1);

    double input{}, sum{};

    for (int i = 0; i < 8; i++) {
        cin >> input;
        sum += input;
    }

    cout << sum / 8.0 << "\n";

    return 0;
}