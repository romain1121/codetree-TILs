#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n{}, input[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    sort(input, input + n);

    for (int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << input[i] << " ";
    }

    return 0;
}