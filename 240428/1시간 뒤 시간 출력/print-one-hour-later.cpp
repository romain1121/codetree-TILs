#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int h{}, m{};
    cin >> h;
    cin.get();
    cin >> m;

    cout << h + 1 << ":" << m << "\n";
    return 0;
}