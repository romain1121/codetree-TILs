#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input{}, sum{}, cnt{};

    for (int i = 0; i < 10; i++) {
        cin >> input;
        if (!input) {
            break;
        }
        if (!(input % 2)) {
            sum += input;
            cnt++;
        }
    }

    cout << cnt << " " << sum;

    return 0;
}