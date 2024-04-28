#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int d{}, m{}, y{};
    cin >> m;
    cin.get();
    cin >> d;
    cin.get();
    cin >> y;
    cin.get();

    cout << y << "." << m << "." << d << "\n";
    return 0;
}