#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i{}, arr[10]{};

    for (; i < 10; i++) {
        cin >> arr[i];
        if (!arr[i]) {
            i--;
            break;
        }
    }
    if (i == 10) i--;

    for (int j = 0; j <= i; j++) {
        cout << arr[i - j] << " ";
    }

    return 0;
}