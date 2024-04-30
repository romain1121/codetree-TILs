#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout.precision(1);

    int i{}, arr[10]{}, sum{};

    for (;i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250)
            break;
    }

    for (int j = 0; j < i; j++) {
        sum += arr[j];
    }

    cout << sum << " " << double(sum) / double(i);

    return 0;
}