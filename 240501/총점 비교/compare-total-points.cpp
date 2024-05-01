#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
    public:
        string name;
        int s1, s2, s3;

        Student(string name = "", int s1 = 0, int s2 = 0, int s3 = 0) {
            this->name = name;
            this->s1 = s1;
            this->s2 = s2;
            this->s3 = s3;
        }
};

bool cmp(Student a, Student b) {
    return a.s1 + a.s2 + a.s3 < b.s1 + b.s2 + b.s3;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, sr1, sr2, sr3;
    string nm;

    cin >> n;
    Student *students = new Student[n];

    for (int i = 0; i < n; i++) {
        cin >> nm >> sr1 >> sr2 >> sr3;
        students[i] = Student(nm, sr1, sr2, sr3);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].s1 << " "
        << students[i].s2 << " " << students[i].s3 << "\n";
    }    

    delete[] students;
    return 0;
}