#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i{}, input{}, arr[10]{}, cnt{};

    cin >> input;

    for (i = 1; i < 11; i++) {
        arr[i - 1] = input * i;
        if (!((input * i) % 5)) cnt++;
        if (cnt > 2) break;
    }
    for (int j = 0; j < i - 1; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}