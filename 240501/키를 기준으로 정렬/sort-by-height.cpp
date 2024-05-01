#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int h, w;

        Person(string name = "", int h = 200, int w = 100) {
            this->name = name;
            this->h = h;
            this->w = w;
        }
};

bool cmp(Person a, Person b) {
    return a.h < b.h;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{}, hIn{}, wIn{};
    string nameIn{};

    cin >> n;
    
    Person *person = new Person[n];

    for (int i = 0; i < n; i++) {
        cin >> nameIn >> hIn >> wIn;
        person[i] = Person(nameIn, hIn, wIn);
    }

    sort(person, person + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << person[i].name << " " << person[i].h << " " << person[i].w << "\n";
    }

    return 0;
}