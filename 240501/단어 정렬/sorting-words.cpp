#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(0);

    int n{};
    string str[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str + n);

    for (int i = 0; i < n; i++) {
        cout << str[i] << "\n";
    }
    return 0;
}