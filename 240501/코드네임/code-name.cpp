#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    class Agent {
        public:
            char c;
            int s;

            Agent(char c = 0, int s = 0) {
                this->c = c;
                this->s = s;
            }
    };

    Agent agent[5];

    char codeName{};
    int score{}, tmp[2];

    for (int i = 0; i < 5; i++) {
        cin >> codeName >> score;
        agent[i] = Agent(codeName, score);
        if (!i) {
            tmp[0] = score;
            tmp[1] = i;
        }
        else {
            tmp[0] = tmp[0] > score ? score : tmp[0];
            tmp[1] = tmp[0] > score ? i : tmp[1];
        }
    }

    cout << agent[tmp[1]].c << " " << agent[tmp[1]].s << "\n";

    return 0;
}