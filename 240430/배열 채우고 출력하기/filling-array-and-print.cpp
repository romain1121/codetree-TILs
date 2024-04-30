#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char chr[10]{};

    for (int i = 0; i < 10; i++)
        cin >> chr[i];

    for (int i = 0; i < 10; i++)
        cout << chr[9-i];

    return 0;
}