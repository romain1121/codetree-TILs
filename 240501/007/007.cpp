#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    class Secret {
        public:
            string c, p;
            int t;

            Secret(string c, string p, int t) {
                this->c = c;
                this->p = p;
                this->t = t;
            }
    };

    string in1, in2;
    int in3;

    cin >> in1 >> in2 >> in3;

    Secret secret = Secret(in1, in2, in3);

    cout << "secret code : " << secret.c << "\n";
    cout << "meeting point : " << secret.p << "\n";
    cout << "time : " << secret.t << "\n";

    return 0;
}