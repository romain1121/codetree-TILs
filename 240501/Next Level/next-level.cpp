#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    class User {
        public:
            string id;
            int lv;

            User(string id = "codetree", int lv = 10) {
                this->id = id;
                this->lv = lv;
            }
    };

    string idIn;
    int lvIn;

    cin >> idIn >> lvIn;

    User user1 = User();
    User user2 = User(idIn, lvIn);

    cout << "user " << user1.id << " lv " << user1.lv << "\n";
    cout << "user " << user2.id << " lv " << user2.lv << "\n";
 
    return 0;
}