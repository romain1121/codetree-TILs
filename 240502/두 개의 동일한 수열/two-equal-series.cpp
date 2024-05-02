#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool flag = 1;
    int n{};
    cin >> n;

    int *A = new int[n];
    int *B = new int[n];

    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    sort(A, A + n);
    sort(B, B + n);

    for (int i = 0; i < n; i++) {
        if (A[i] != B[i]) !flag;
    }
    
    if (flag) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}