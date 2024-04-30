#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int first{}, second{}, arr[10]{};

    cin >> first >> second;
    arr[0] = first;
    arr[1] = second;

    for (int i = 2; i < 10; i++) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}