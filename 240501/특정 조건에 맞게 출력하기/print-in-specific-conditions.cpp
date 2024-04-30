#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input{}, arr[100]{}, i{};

    while(i <= 100) {
        cin >> input;
        if (!input) {
            i--;
            break;
        }
        arr[i] = (input % 2) ? input + 3 : input / 2;
        i++;
    }
    for (int j = 0; j <= i; j++) {
        cout << arr[j] << " ";
    }
    return 0;
}