#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed;
    cout.precision(1);
    
    int n{};
    double s{}, input{};

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> input;
        s += input;
    }

    s /= double(n);
    
    if (s >= 4.0)
        cout << s << "\nPerfect\n";
    else if (s >= 3.0)
        cout << s << "\nGood\n";
    else
        cout << s << "\nPoor\n";

    return 0;
}