#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

class Student {
    public:
        string name;
        int kor, eng, mth;

        Student(string name = "", int kor = 0, int eng = 0, int mth = 0) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mth = mth;
        }
};

bool cmp(Student a, Student b) {
    return make_tuple(-a.kor, -a.eng, -a.mth) < make_tuple(-b.kor, -b.eng, -b.mth);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, kr, en, mt;
    string nm;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++) {
        cin >> nm >> kr >> en >> mt;
        students[i] = Student(nm, kr, en, mt);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].kor << " "
        << students[i].eng << " " << students[i].mth << "\n";
    }

    return 0;
}