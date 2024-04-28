#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int y{}, m{}, d{};
    cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;

    cout << m << "-" << d << "-" << y << "\n";
    return 0;
}