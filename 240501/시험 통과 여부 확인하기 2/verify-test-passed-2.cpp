#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{}, cnt{};
    double input[4]{}, avg[10]{};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input[0] >> input[1] >> input[2] >> input[3];
        avg[i] += ((input[0] + input[1] + input[2] + input[3]) / 4.0);
    }
    for (int i = 0; i < n; i++) {
        if (avg[i] > 60) {
            cout << "pass\n";
            cnt++;
        }
        else cout << "fail\n";
    }

    cout << cnt;

    return 0;
}