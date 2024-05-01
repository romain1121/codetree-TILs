#include <iostream>
#include <algorithm>
#include <string>
#include <tuple>

using namespace std;

class Student {
    public:
        int h, w, n;

        Student(int h = 0, int w = 0, int n = 0) {
            this->h = h;
            this->w = w;
            this->n = n;
        }
};

bool cmp(Student a, Student b) {
    return make_tuple(-a.h, -a.w, a.n) < make_tuple(-b.h, -b.w, b.n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, hgt, wgt;

    cin >> N;

    Student *students = new Student[N];

    for (int i = 0; i < N; i++) {
        cin >> hgt >> wgt;
        students[i] = Student(hgt, wgt, i + 1);
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << students[i].h << " " << students[i].w << " " << students[i].n << "\n";
    }

    return 0;
}