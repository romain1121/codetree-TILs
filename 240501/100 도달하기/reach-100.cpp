#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{}, arr[100]{};
    
    cin >> n;
    arr[0] = 1;
    arr[1] = n;
    
    cout << arr[0] << " " << arr[1] << " ";
    for (int i = 2; ;i++) {
        arr[i]= arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
        if (arr[i] > 100) break;
    }

    return 0;
}