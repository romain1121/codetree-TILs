#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{}, input{}, cnt{}, even[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (!(input % 2)) {
            even[cnt] = input;
            cnt++;
        }
    }

    for (int j = 0; j < cnt; j++) {
        cout << even[(cnt - 1) - j] << " ";
    }
    return 0;
}