#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{}, s{};

    for (int i = 0; i < 10; i++) {
        cin >> n;
        s += n;
    }
    
    cout << s << "\n";

    return 0;
}