#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int fst{}, scd{}, arr[10]{};

    cin >> fst >> scd;
    arr[0] = fst;
    arr[1] = scd;

    cout << fst << " " << scd << " ";

    for (int i = 2; i < 10; i++) {
        arr[i] = arr[i - 1] + (2 * arr[i - 2]);
        cout << arr[i] << " ";
    }
    
    return 0;
}