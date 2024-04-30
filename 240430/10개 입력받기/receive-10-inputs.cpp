#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout.precision(1);

    int n{}, i{};
    double sum{};

    for (; i < 10; i++) {
        cin >> n;
        if (!n) {
            i--;
            break;
        }
        sum += n;
    }

    cout << int(sum) << " " << sum / ((i == 10) ? double(i) : double(++i));

    return 0;
}